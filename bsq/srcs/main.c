/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akourkou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:15:35 by akourkou          #+#    #+#             */
/*   Updated: 2019/07/31 20:58:58 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tools.h"

int	main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc > 1)
	{
		while (++i < argc)
		{
			display(solve(input(argv[i])));
			if (i + 1 < argc)
				ft_putchar('\n');
		}
	}
	else
		display(solve(input(0)));
	return (0);
}
