/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 01:42:59 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/21 01:43:37 by scarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	validate(int **numbers, int row, int col, int value)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		if ((numbers[i][col] == value || numbers[row][i] == value))
			return (0);
		i += 1;
	}
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (numbers[row - (row % 3) + i][col - (col % 3) + j] == value)
				return (0);
			j += 1;
		}
		i += 1;
	}
	return (1);
}
