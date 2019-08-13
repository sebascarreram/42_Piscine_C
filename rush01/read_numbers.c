/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 01:11:52 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/21 16:48:46 by scarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

int		**read_numbers(char **argv)
{
	int x;
	int y;
	int **numbers;

	x = 0;
	numbers = (int **)malloc(sizeof(int *) * 9 + 1);
	while (x < 9)
	{
		if (ft_strlen(argv[x]) != 9)
			return (0);
		numbers[x] = (int *)malloc(sizeof(int) * 9 + 1);
		y = 0;
		while (y < 9)
		{
			if (argv[x][y] == '.')
				numbers[x][y] = 0;
			else if (argv[x][y] >= '1' && argv[x][y] <= '9')
				numbers[x][y] = argv[x][y] - '0';
			else
				return (0);
			y += 1;
		}
		x += 1;
	}
	return (numbers);
}
