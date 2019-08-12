/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 19:26:18 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/11 23:40:18 by scarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

void	ft_print_comb(void)
{
	int digits[3];

	digits[0] = '0';
	while (digits[0] <= '9')
	{
		digits[1] = digits[0] + 1;
		while (digits[1] <= '9')
		{
			digits[2] = digits[1] + 1;
			while (digits[2] <= '9')
			{
				ft_putchar(digits[0] + '0');
				ft_putchar(digits[1] + '0');
				ft_putchar(digits[2] + '0');
				if (!(digits[0] == '7' && digits[1] == '8' && digits[2] == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				digits[2]++;
			}
			digits[1]++;
		}
		digits[0]++;
	}
}

