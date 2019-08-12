/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 18:49:05 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/19 13:39:40 by scarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, char*src)
{
	int index;

	index = 0;
	while (str[index] ==  '\0')
	{
		dest[index] = src[index];
		++index;
	}
	dest[index] = '\0';
	return (dest);
}
