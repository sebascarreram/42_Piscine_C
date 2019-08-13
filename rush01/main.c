/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 03:02:12 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/21 17:20:21 by scarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	display_numbers(int **numbers);
int		**read_numbers(char **argv);
int		solve_sudoku(int **numbers, int value);

int		main(int argc, char **argv)
{
	int **numbers;

	if (argc == 10)
	{
		numbers = read_numbers(&argv[1]);
		if (!numbers)
			write(1, "ERROR 1\n", 8);
		else if (solve_sudoku(numbers, 0))
			display_numbers(numbers);
		else
			write(1, "ERROR 2\n", 8);
	}
	else
		write(1, "ERROR 3\n", 8);
	return (0);
}
