/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:48:21 by scarrera          #+#    #+#             */
/*   Updated: 2019/07/31 21:18:57 by akourkou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# define BUFFER_SIZE 42000

int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		**input(char *filename);
int		**setup(int **map, char *fline, int lines, int length);
int		**read_file(int fd, int **map, int i, int *k);
void	display(int **map);
int		**solve(int **map);
int		ft_numlen(int num);
char	*ft_strcut(char *str, int limit);

#endif
