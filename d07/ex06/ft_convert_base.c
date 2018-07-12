/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 15:08:10 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/12 03:31:18 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> //a degager

int		myft_read_basenb(char *str)
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

int		myft_str_to_nbr(char *nbr, char *base, int bn)
{
	int i;
	int j;
	int nb;
	int fn;

	i = 0;
	j = 0;
	nb = 0;
	while(nbr[i])
	{
		fn = -1;
		j = 0;
		while(j < bn)
		{
			if(nbr[i] == base[j])
			{
				fn = j;
				break;
			}
			j++;
		}
		if (fn == -1) /*cas a gerer*/
			return 0;
		nb *= bn;
		nb += fn;
		i++;
	}
	return (nb);
}

char	*myft_nbr_to_str(int nbr, char *base, int bn)
{	
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int bf;
	int bt;
	int nb1;

	bf = myft_read_basenb(base_from);
	bt = myft_read_basenb(base_to);
	printf("%d %d\n", bf, bt);
	if (!bf || !bt)
		return NULL;
	nb1 = myft_str_to_nbr(nbr, base_from, bf);
	printf("%d\n", nb1);
	return NULL;
}
