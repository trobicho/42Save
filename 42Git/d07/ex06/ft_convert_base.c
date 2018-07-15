/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 15:08:10 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/13 15:08:56 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				myft_read_basenb(char *str)
{
	int i;
	int j;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

unsigned int	myft_str_to_nbr(char *nbr, char *base, int bn)
{
	int				i;
	int				j;
	int				fn;
	unsigned int	nb;

	i = -1;
	nb = 0;
	while (nbr[++i])
	{
		fn = -1;
		j = -1;
		while (++j < bn)
		{
			if (nbr[i] == base[j])
			{
				fn = j;
				break ;
			}
		}
		if (fn == -1)
			return (0);
		nb *= bn;
		nb += fn;
	}
	return (nb);
}

unsigned int	pown(unsigned int nbr, int bn, int *n)
{
	unsigned int p;

	p = 1;
	*n = 1;
	while (nbr / p >= (unsigned int) bn)
	{
		p *= bn;
		(*n)++;
	}
	return (p);
}

char			*myft_nbr_to_str(unsigned int nbr, char *base, int bn, int neg)
{
	char			*nb_str;
	unsigned int	p;
	int				i;
	int				ns;

	p = pown(nbr, bn, &ns);
	nb_str = malloc(ns + neg);
	i = 0;
	if (neg)
	{
		nb_str[0] = '-';
		i++;
	}
	while (i < ns + neg)
	{
		nb_str[i] = base[nbr / p];
		nbr %= p;
		p /= bn;
		i++;
	}
	return (nb_str);
}

char			*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				bf;
	int				bt;
	unsigned int	nb1;
	int				neg;

	neg = 0;
	bf = myft_read_basenb(base_from);
	bt = myft_read_basenb(base_to);
	if (!bf || !bt)
		return (NULL);
	if (nbr[0] == '-')
	{
		neg = 1;
		nbr++;
	}
	else if (nbr[0] == '+')
		nbr++;
	nb1 = myft_str_to_nbr(nbr, base_from, bf);
	return (myft_nbr_to_str(nb1, base_to, bt, neg));
}
