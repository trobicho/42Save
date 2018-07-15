/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 05:49:21 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/15 05:52:37 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *tabr;

	tabr = malloc(sizeof(int) * length);
	i = 0;
	while(i < length)
	{
		tabr[i] = f(tab[i]);
		i++;
	}
	return (tabr);
}
