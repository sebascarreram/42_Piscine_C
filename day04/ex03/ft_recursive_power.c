/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 21:35:29 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/13 21:40:01 by scarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 1)
		return (nb);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
// NOT MAIN NOT #INCLUDE FOR SUBMIT
int main()
{
	int num1;
	int num2;
	
	num1 = 4;
	num2 = 0;
	printf("%i\n", ft_recursive_power(num1,num2));
	return (0);
}
