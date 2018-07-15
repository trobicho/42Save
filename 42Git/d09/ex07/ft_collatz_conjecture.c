/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 02:19:39 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/13 16:07:46 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	myft_syca(unsigned int n)
{
	return (n % 2 ? n * 3 + 1 : n / 2);
}

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	int flight;

	if (base == 0 || base == 1)
		return (0);
	flight = 1;
	while ((base = myft_syca(base)) != 1)
	{
		flight++;
	}
	return (flight);
}
