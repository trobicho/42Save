/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 01:15:15 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/04 11:12:28 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_nbr(int n_tab[10], int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar('0' + n_tab[i]);
		i++;
	}
	ft_putchar(',');
	ft_putchar(' ');
}

void	inc(int n_tab[10], int n)
{
	int i;

	while (n_tab[0] <= 10 - n)
	{
		ft_print_nbr(n_tab, n);
		n_tab[n - 1]++;
		if (n_tab[n - 1] == 10 && n > 1)
		{
			i = 2;
			while (n - i >= 0 && n_tab[n - i] == 10 - i)
			{
				i++;
			}
			n_tab[n - i]++;
			i--;
			while (i >= 1)
			{
				n_tab[n - i] = n_tab[n - i - 1] + 1;
				i--;
			}
		}
	}
}

void	ft_print_combn(int n)
{
	int n_tab[10];
	int i;

	i = 0;
	while (i < n)
	{
		n_tab[i] = i;
		i++;
	}
	inc(n_tab, n);
}
