/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 22:53:18 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/19 13:26:04 by scarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int index;
	int nb;
	int flag;

	nb = 0;
	index = 0;
	flag = 1;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
				*str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (str[0] == '-')
		flag = -1;
	if (str[0] == '-' || str[0] == '+')
		index++;
	while (str[index] != '\0')
	{
		if (str[index] >= '0' && str[index] <= '9')
		{
			nb = nb * 10;
			nb += str[index] - 48;
		}
		index++;
	}
	return (nb * flag);
}
