/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 12:26:38 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/19 13:12:29 by scarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{

	if (nb == 2147483647)
	{
		ft_putchar('2');
		nb = 14783647;
	}
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 17483648;
	}
	if ( nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
			ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}
