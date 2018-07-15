#!/bin/sh

gcc -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
gcc -c ft_putnbr.c ft_strcpy.c
ar rc libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o ft_putnbr.o ft_strcpy.o
rm ./*.o
