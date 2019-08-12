/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:47:03 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/29 16:13:37 by scarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tools.h"

void	display(int **map)
{
	int i;
	int j;

	i = 1;
	if (map == NULL)
	{
		write(2, "map error\n", 10);
		return ;
	}
	while (i <= map[0][4])
	{
		j = -1;
		while (++j < map[0][3])
		{
			if (map[i][j] == 0)
				ft_putchar(map[0][1]);
			else if (j >= map[0][6] && (j < map[0][6] + map[0][5]) &&
					i >= map[0][7] && i < (map[0][7] + map[0][5]))
				ft_putchar(map[0][2]);
			else
				ft_putchar(map[0][0]);
		}
		i++;
		ft_putchar('\n');
	}
}
