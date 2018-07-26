/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 11:44:11 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/16 12:38:35 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../d08/ex05/ft_stock_par.h"
#include <unistd.h>

void ft_show_tab(struct s_stock_par *par);
struct s_stock_par *ft_param_to_tab(int ac, char **av);
void	ft_putchar(char c)
{
	write(1, &c, 1);
}


int main(int argc, char **argv)
{
	t_stock_par *par = ft_param_to_tab(argc, argv);
	ft_show_tab(par);
	return (0);
}
