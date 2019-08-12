/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 21:32:01 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/31 21:38:48 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_list.h"
#include "../includes/tools.h"

int	**save_first_line(t_list **elem, int **map, int *first, int i)
{
	char	*fline;
	t_list	*current;
	int		lines;
	int		length;

	if (!(fline = (char*)malloc(sizeof(char) * ft_list_size(*elem))))
		return (NULL);
	current = *elem;
	while (current && (fline[i++] = current->data))
		current = current->next;
	fline[i] = '\0';
	lines = ft_atoi(ft_strcut(fline, 3));
	ft_list_clear(elem);
	free(current);
	if ((length = ft_strlen(fline)) != ft_numlen(lines) + 3)
		return (NULL);
	if (!(map = (int**)malloc(sizeof(int*) * (lines + 2))))
		return (NULL);
	if (!(map[0] = (int*)malloc(sizeof(int) * 9)))
		return (NULL);
	map = setup(map, fline, lines, length);
	free(fline);
	*first = 1;
	return (map);
}

int	**save_second_line(t_list **elem, int **map, int index)
{
	t_list	*current;
	int		i;
	int		elem_size;

	elem_size = ft_list_size(*elem);
	if (!(map[index] = (int*)malloc(sizeof(int) * (elem_size))))
		return (NULL);
	map[0][3] = elem_size;
	map[0][5] = 0;
	i = 0;
	current = *elem;
	while (current)
	{
		if (current->data != map[0][0] && current->data != map[0][1])
			return (NULL);
		map[index][i++] = (current->data == map[0][0]) ? 1 : 0;
		current = current->next;
	}
	i = 0;
	ft_list_clear(elem);
	return (map);
}

int	**save_lines(int **map, int *index, char c, int *i)
{
	if (*i > map[0][3])
		return (NULL);
	if (c == '\n')
	{
		++(*index);
		if (*index > 2 && *i < map[0][3])
			return (NULL);
		*i = 0;
		if (!(map[*index] = (int*)malloc(sizeof(int) * (map[0][3]))))
			return (NULL);
	}
	else if (c)
	{
		if (c != map[0][0] && c != map[0][1])
			return (NULL);
		map[*index][(*i)++] = (c == map[0][0]) ? 1 : 0;
	}
	return (map);
}

int	**read_file(int fd, int **map, int i, int *k)
{
	ssize_t	bytes;
	char	buffer[BUFFER_SIZE];
	t_list	*elem;

	while ((bytes = read(fd, &buffer, BUFFER_SIZE)))
	{
		k[2] = -1;
		while ((++k[2] < bytes))
		{
			if (buffer[k[2]] == '\n')
				k[0]++;
			if (k[0] == 1 && k[1] == 0)
				map = save_first_line(&elem, map, &k[1], 0);
			else if (k[0] == 0 || k[0] == 1)
				ft_list_push_back(&elem, buffer[k[2]]);
			else if (k[0] == 2 && elem)
				map = save_second_line(&elem, map, 1);
			if (k[0] >= 2 && map != NULL)
				map = save_lines(map, &i, buffer[k[2]], &k[3]);
			if (map == NULL && k[0] >= 1)
				return (NULL);
		}
	}
	map[0][8] = --i;
	return (map);
}
