/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 20:05:22 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/30 13:46:40 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct			s_list
{
	char				data;
	struct s_list		*next;
}						t_list;

t_list					*ft_create_elem(char data);
void					ft_list_push_back(t_list **begin_list, char data);
int						ft_list_size(t_list *begin_list);
void					ft_list_clear(t_list **begin_list);

#endif
