/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 17:48:55 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/10 18:31:28 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *tab;

	if(max - min <= 0)
		return NULL;
	tab=malloc(sizeof(int) * (max-min));
	i = 0;
	while (i<max - min)
	{
		tab[i] = i + min;
	}
	return (tab);
}
