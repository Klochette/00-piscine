# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchamayo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/20 14:11:29 by mchamayo          #+#    #+#              #
#    Updated: 2018/08/20 19:06:08 by mchamayo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
HEADER = includes/

all: $(NAME)

$(NAME):
	gcc -c -I $(HEADERS) -Wall -Wextra -Werror $(SRC)
	ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

clean:
	/bin/rm -f ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
