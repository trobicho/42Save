/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 19:09:34 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/04 21:08:37 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int p;
	int r;

	if (power < 0)
		return (0);
	else if (power == 1)
		return (1);
	r = nb;
	p = 1;
	while (p < power)
	{
		r *= nb;
		p++;
	}
	return (r);
}
