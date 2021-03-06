/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 16:45:33 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/13 21:24:15 by scarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 1 && nb < 13)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (0);
}

int main()
{
	int test;
	
	test = 13;
	printf("%i\n", ft_recursive_factorial(test));
	return (0);
}
