/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 09:55:46 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/17 15:34:30 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "doop.h"
#include "fnct.h"
#include "myft_putnbr.h"

int		print_by0(t_op op)
{
	if (op == div)
		write(1, "Stop : division by zero\n", 24);
	else if (op == mod)
		write(1, "Stop : modulo by zero\n", 22);
	return (-1);
}

void	init_f_tab(int (*f_tab[])(int, int))
{
	f_tab[0] = &myft_add;
	f_tab[1] = &myft_sub;
	f_tab[2] = &myft_mul;
	f_tab[3] = &myft_div;
	f_tab[4] = &myft_mod;
}

int		doop(int nb1, t_op op, int nb2)
{
	int (*f_tab[5])(int, int);
	int r;

	init_f_tab(f_tab);
	if (nb2 == 0 && (op == div || op == mod))
		return (print_by0(op));
	r = (f_tab[op])(nb1, nb2);
	myft_putnbr(r);
	write(1, "\n", 1);
	return (1);
}
