/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myft_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 12:58:26 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/17 13:15:26 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		myft_pow10(int nb)
{
	int p;

	p = 1;
	while (nb / p >= 10)
	{
		p *= 10;
	}
	return (p);
}

void	myft_putnbr(int nb)
{
	int		pow;
	int		sub;
	char	c;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			sub = 1;
			nb = 0 - nb;
			write(1, "-", 1);
		}
		pow = myft_pow10(nb);
		while (pow >= 1)
		{
			c = '0' + nb / pow;
			write(1, &c, 1);
			nb %= pow;
			pow /= 10;
		}
	}
}
