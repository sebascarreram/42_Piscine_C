/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 22:53:00 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/19 15:06:12 by scarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
// Not down for submit and not #include 
int main()
{
	int a;
	int b;

	a = 10;
	b = 20;
	printf("Number1: %i, Number2: %i\n", a, b);
	ft_swap(&a, &b);
	printf("Swapped !\n");
	printf("Number1: %i, Number2: %i\n", a, b);
	return (0);
}
