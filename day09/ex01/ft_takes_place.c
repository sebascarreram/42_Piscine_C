/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 19:53:56 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/18 22:34:39 by scarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int i;

	i = hour;
	if (hour > 12)
	{
		i = hour % 12;
	}
	else if (hour == 0)
	{
		i = 12;
	}
	if (hour < 11)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 A.M.\n", i, (i + 1) % 12);
	}
	else if (hour == 11)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 A.M. AND 12.00 P.M.\n");
	}
	else if (hour == 23)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 P.M. AND 12.00 A.M.\n");
	}
	else if (hour == 24)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 A.M. AND 01.00 A.M.");
	}
	else
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 P.M.\n", i, (i + 1) % 12);
	}
}
