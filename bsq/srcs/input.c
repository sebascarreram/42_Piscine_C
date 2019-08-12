/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 20:54:29 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/31 21:19:01 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tools.h"

int	**input(char *filename)
{
	int fd;
	int k[4];
	int **map;

	k[0] = 0;
	k[1] = 0;
	k[3] = 0;
	map = NULL;
	if (filename)
		fd = open(filename, O_RDONLY);
	else
		fd = 0;
	if (fd == -1)
		return (map);
	map = read_file(fd, map, 1, k);
	close(fd);
	return (map);
}

int	**setup(int **map, char *fline, int lines, int length)
{
	map[0][0] = fline[length - 3];
	map[0][1] = fline[length - 2];
	map[0][2] = fline[length - 1];
	map[0][4] = lines;
	if (map[0][0] == map[0][1] || map[0][0] ==
			map[0][2] || map[0][1] == map[0][2])
		return (NULL);
	return (map);
}
