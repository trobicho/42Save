/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 11:43:13 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/13 11:43:21 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	int tmp;

	if (i > j)
	{
		tmp = i;
		i = j;
		j = tmp;
	}
	if (i > k)
	{
		tmp = i;
		i = k;
		k = tmp;
	}
	return (j < k) ? j : k;
}
