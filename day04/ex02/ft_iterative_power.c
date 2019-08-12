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

int	ft_iterative_power(int nb, int power)
{
	int a;

	a = 1;
	if (power == 1)
	{
		return (nb);
	}
	else
	{
		while (power >= 1)
		{
			a = a * nb;
			power--;
		}
	}
	return (a);
}
