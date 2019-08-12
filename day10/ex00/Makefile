# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scarrera <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 17:38:39 by scarrera          #+#    #+#              #
#    Updated: 2019/07/23 23:26:24 by scarrera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ~/srcs/ft_putchar.c ~/srcs/ft_putstr.c ~/srcs/ft_strcmp.c ~/srcs/ft_strlen.c ~/srcs/ft_swap.c

OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

HEADER = includes/

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra  $(SRC) -I $(HEADER)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJECTS)
	
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
