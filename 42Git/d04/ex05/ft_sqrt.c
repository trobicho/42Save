/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 10:50:58 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/05 11:19:50 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int p;

	if (!nb)
		return (0);
	if (nb == 1)
		return (1);
	p = 1;
	while (p * p < nb)
	{
		p++;
		if (p * p == nb)
			return (p);
	}
	return (0);
}