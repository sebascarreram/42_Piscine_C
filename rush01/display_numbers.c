/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 01:09:57 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/21 05:42:58 by scarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	display_numbers(int **numbers)
{
	int x;
	int y;

	x = 0;
	while (x < 9)
	{
		y = 0;
		while (y < 9)
		{
			ft_putchar(numbers[x][y] + '0');
			if (y != 8)
				ft_putchar(' ');
			y += 1;
		}
		ft_putchar('\n');
		x += 1;
	}
}
