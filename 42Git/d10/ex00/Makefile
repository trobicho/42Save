# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trobicho <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/16 17:35:44 by trobicho          #+#    #+#              #
#    Updated: 2018/07/16 17:56:16 by trobicho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OUTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADERS = ./includes
LIB_NAME = lift.a

all:
	gcc -c $(SRCS) -I $(HEADERS)
	ar rc $(LIB_NAME) $(OUTS)
	ranlib $(LIB_NAME)

clean:
	rm *.o

fclean: clean
	rm $(LIB_NAME)

re: fclean all
