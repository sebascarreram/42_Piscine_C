/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 23:21:08 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/19 00:28:39 by scarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> // NOT SUBMIT

int	*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	if (min >= max)
		return (NULL);
	tab = (int*)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
// NOT SUBMIT
int	main()
{
	int one = 2;
	int two = 5;
	
	printf("%i\n", *ft_range(one, two));
	return (0);
}
