# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scarrera <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/27 15:51:05 by scarrera          #+#    #+#              #
#    Updated: 2019/07/28 19:04:34 by scarrera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = gcc -Wall -Wextra -Werror -o

NAME = eval_expr
SRCS = eval_expr.c ft_all.c
OBJS = $(FILENAMES: .c=.o)

all: $(NAME)

$(NAME):
	$(FLAGS) $(NAME) $(addprefix srcs/, $(SRCS))

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
