/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 18:40:05 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/10 20:41:18 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int i;
	if(max - min <= 0)
	{
		*range = NULL;
		return 0;
	}
	*range = malloc(sizeof(int) * (max - min));
	i = 0;
	while (i < max - min)
	{
		(*range)[i] = i + min;
		i++;
	}
	return (max - min);
}
