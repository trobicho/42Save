# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trobicho <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/17 15:07:41 by trobicho          #+#    #+#              #
#    Updated: 2018/07/17 15:36:46 by trobicho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.c doop.c fnct.c ft_atoi.c myft_putnbr.c
OUTS = main.o doop.o fnct.o ft_atoi.o myft_putnbr.o
NAME = do-op

all: $(OUTS)
	gcc -Wall -Werror -Wextra $(OUTS) -o $(NAME)

$(OUTS):
	gcc -c -Wall -Werror -Wextra $(SRCS)

clean:
	rm $(OUTS)
