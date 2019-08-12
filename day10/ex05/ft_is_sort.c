/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:38:16 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/23 20:11:44 by scarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		index;

	index = 0;
	while ((index + 1) < length)
	{
		if (f(tab[index], tab[index + 1]) > 0)
			return (0);
		index += 1;
	}
	return (1);
}
