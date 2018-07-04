/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 21:39:01 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/04 22:07:15 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (!index)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	return (ft_fibonacci(index-1) + ft_fibonacci(index-2));
}
