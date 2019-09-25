/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 14:43:15 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/19 14:50:27 by scarrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int 	ft_strcmp(char *s1, char *s2)
{
	int leng1;
	int leng2;
	int index;
	
	leng1 = -1;
	leng2 = -1;
	index = 0;
	while (s1[++leng1] != '\0')
		;
	while (s2[++leng2] != '\0')
		;
	while (index < leng1 && index < leng2)
	{
		if (s1[index] == s2[index])
			index++;
		else
			return (s1[index] - s2[index]);
	}
	if (leng1 < leng2)
		return (leng1 - leng2);
	else if (leng1 > leng2)
		return (leng1 - leng2);
	else
		return (0);
	return (0);
}
/*
int 	main()
{	
	int index;
	char *name[] = {"seb", "sebast", "sofia", "molano", "sabas"};
	//char name2[] = "sebastian"; 
	
	index = -1;
	while (name[++index])
		printf("%s %s %i\n", name[0] , name[index], ft_strcmp(name[0], name[index]));	
	return (0);
}*/
