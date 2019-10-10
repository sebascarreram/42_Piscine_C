/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 23:57:55 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/18 23:58:05 by scarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int index;
	int y;
	
	index = 0;
	while(factory[index])
	{
		y = 0;
		while (factory[index][y])
		{
			free(factory[index][y]);
			y++;
		}
		free(factory[index]);
		index++;
	}
	free(factory);
}

