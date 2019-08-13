/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 17:38:59 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/28 22:16:23 by scarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes.h"

int	number(char *expr)
{
	int numb1;

	while (*expr == ' ')
		expr += 1;
	if (*expr == '(')
	{
		expr += 1;
		numb1 = eval_expr(expr);
		if (*expr == ')')
			expr += 1;
		return (numb1);
	}
	return (ft_atoi(expr));
}

int factors(char *expr)
{
	int numb1;
	int numb2;
	char op;

	numb1 = number(expr);
	while (*expr)
	{
		while (*expr == ' ')
			expr += 1;
		op = *expr;
		if (op != '/' && op != '*' && op != '%')
			return (numb1);
		expr += 1;
		numb2 = number(expr);
		if (op == '/')
			numb1 /= numb2;
		else if (op == '*')
			numb1 *= numb2;
		else
			numb1 %= numb2;
	}
	return (numb1);
}

int eval_expr(char *expr)
{
	int numb1;
	int numb2;
	char op;

	numb1 = factors(expr);
	while  (*expr)
	{
		while (*expr == ' ')
			expr += 1;
		op = *expr;
		if (op != '+' && op != '-')
			return (numb1);
		expr += 1;
		numb2 = factors(expr);
		if (op == '+')
			numb1 += numb2;
		else
			numb1 -= numb2;
	}
	return (numb1);
}

int main (int ac, char **av)
{
	int i;

	i = 1;
	while (--ac)
	{
		ft_putnbr(eval_expr(av[i]));
		ft_putchar('\n');
		i += 1;
	}
	return (0);
}
