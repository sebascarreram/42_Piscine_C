/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 17:28:06 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/13 22:50:24 by scarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int a;

	a = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if(power == 1)
		return (nb);
	else
	{
		while (power >= 1)
		{
			a *= nb;
			power--;
		}
	}
	return (a);
}
// NOT #INCLUDE AND NOT MAIN FOR SUBMIT
int main()
{
	int number;
	int pow;
	
	number = 10;
	pow = 0;
	printf("%i\n", ft_iterative_power(number, pow));
	return (0);
}
