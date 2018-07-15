/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 11:58:57 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/13 15:49:50 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				comp(int v, unsigned int p)
{
	if (v & p)
		return (1);
	return (0);
}

unsigned int	ft_active_bits(int value)
{
	unsigned int p;
	unsigned int count;

	p = 1;
	count = 0;
	while (p < 32)
	{
		count += comp(value, p);
		p *= 2;
	}
	return (count);
}
