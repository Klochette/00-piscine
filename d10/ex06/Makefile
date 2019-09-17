# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/20 23:58:04 by mchamayo          #+#    #+#              #
#    Updated: 2018/08/22 15:55:31 by mchamayo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRC = srcs/main.c srcs/ft_op.c srcs/ft_atoi.c srcs/ft_put.c
CFLAGS = -Wall -Wextra -Werror
OBJECTS = srcs/main.o srcs/ft_op.o srcs/ft_atoi.o srcs/ft_put.o

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -o $(NAME) $(SRC)

clean:
	/bin/rm -f $(OBJECTS)

fclean:
	/bin/rm -f $(NAME)

re: fclean all
