/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 09:55:30 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/17 15:37:21 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "doop.h"
#include "ft_atoi.h"

t_op	argtoop(char *arg)
{
	if (arg[0] == '+')
		return (add);
	if (arg[0] == '-')
		return (sub);
	if (arg[0] == '*')
		return (mul);
	if (arg[0] == '/')
		return (div);
	if (arg[0] == '%')
		return (mod);
	return (no_op);
}

int		main(int argc, char **argv)
{
	int		nb1;
	int		nb2;
	t_op	op;

	if (argc != 4)
		return (0);
	nb1 = ft_atoi(argv[1]);
	if ((op = argtoop(argv[2])) == no_op)
	{
		write(1, "0\n", 2);
		return (0);
	}
	nb2 = ft_atoi(argv[3]);
	doop(nb1, op, nb2);
	return (0);
}
