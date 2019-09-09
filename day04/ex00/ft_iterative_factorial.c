/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 09:26:26 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/13 21:19:15 by scarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int index;
	int result;

	index = 1;
	result = 1;	
	if (nb < 0)
		return (0);
	else if (nb >= 0 && nb < 13)
	{
		while (++index <= nb)
			result *= index;
		return (result);
	}
	else
		return (0);
}

int main()
{
	int test;
	
	test = 14;
	printf("%i\n", ft_iterative_factorial(test));
	return (0);
}
