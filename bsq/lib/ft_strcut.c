/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 00:46:50 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/30 13:57:49 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/tools.h"

char	*ft_strcut(char *str, int limit)
{
	int		length;
	int		count;
	char	*new;

	length = 0;
	while (str[length])
		++length;
	if (!(new = (char*)malloc(sizeof(char) * (length - limit))))
		return (0);
	count = -1;
	while (str[++count] && count < length - limit)
		new[count] = str[count];
	new[count] = '\0';
	return (new);
}
