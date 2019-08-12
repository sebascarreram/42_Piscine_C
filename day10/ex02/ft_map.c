/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 00:10:29 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/23 22:22:01 by scarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		index;
	int		*new;

	index = 0;
	new = malloc(sizeof(int) * length);
	while (index < length)
	{
		new[index] = f(tab[index]);
		index++;
	}
	return (new);
}
