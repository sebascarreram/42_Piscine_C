/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 21:47:54 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/17 23:38:57 by scarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int index;
	
	index = -1;
	if (argc > 0)
	{
		while (argv[0][++index])
			ft_putchar(argv[0][index]);
		ft_putchar('\n');
	}
	return (0);
}
