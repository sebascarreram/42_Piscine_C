/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 23:38:51 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/13 23:40:04 by scarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int raiz;

	raiz = 0;
	while (raiz * raiz < nb)
	{
		raiz++;
		if (raiz * raiz == nb)
		{
			return (raiz);
		}
		if (raiz * raiz > nb)
		{
			return (0);
		}
	}
	return (0);
}
