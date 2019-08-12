/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 21:33:34 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/31 21:33:51 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tools.h"

int	check_left_up(int i, int j, int k)
{
	if (i <= j && i <= k)
		return (i);
	else if (j <= i && j <= k)
		return (j);
	else if (k <= i && k <= j)
		return (k);
	return (k);
}

int	**stock_coord(int **map, int w, int x, int y)
{
	if (w >= map[0][5])
	{
		map[0][5] = w;
		map[0][6] = x;
		map[0][7] = y;
	}
	return (map);
}

int	**solve(int **map)
{
	int x;
	int y;

	if (!map || map[0][4] != map[0][8] || map[0][3] == 0 || map[0][4] == 0)
		return (NULL);
	x = map[0][3];
	y = map[0][4] + 1;
	map[0][5] = 0;
	map = stock_coord(map, map[(y - 1)][(x - 1)], (x - 1), (y - 1));
	while (y-- > 1)
	{
		x = (map[0][3]);
		while (x-- >= 0)
			if (map[y][x] == 1)
			{
				if (x != (map[0][3] - 1) & y != (map[0][4]))
					map[y][x] = (1 + check_left_up(map[y][x + 1],
								map[y + 1][x], map[y + 1][x + 1]));
				map = stock_coord(map, map[y][x], x, y);
			}
	}
	return (map);
}
