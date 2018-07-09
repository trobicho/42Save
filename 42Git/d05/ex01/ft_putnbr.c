/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 23:56:57 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/06 10:52:00 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
int		pow10(int nb);

void	ft_putnbr(int nb)
{
	int pow;
	int sub;

	if (nb < 0)
	{
		sub = 1;
		nb = 0 - nb;
		ft_putchar('-');
	}
	pow = pow10(nb);
	while (pow >= 1)
	{
		ft_putchar('0' + nb / pow);
		nb %= pow;
		pow /= 10;
	}
}

int		pow10(int nb)
{
	int p;

	p = 1;
	while (nb / p >= 10)
	{
		p *= 10;
	}
	return (p);
}
