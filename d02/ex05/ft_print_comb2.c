/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 21:55:38 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/03 23:04:33 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_putchar(char c);

void ft_putnum2(int n);

void	ft_print_comb2(void)
{
	int n0;
	int n1;

	n0=0;
	while(n0<=99)
	{
		n1=n0+1;
		while(n1<=99)
		{
			ft_putnum2(n0);
			ft_putchar(' ');
			ft_putnum2(n1);
			ft_putchar(',');
			ft_putchar(' ');
			n1++;
		}
		n0++;
	}
}

void	ft_putnum2(int n)
{
	if(n<10)
	{
		ft_putchar('0' + n);
	}
	else
	{
		ft_putchar('0' + n/10);
		ft_putchar('0' + n%10);
	}
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}
