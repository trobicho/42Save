/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 06:10:59 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/16 17:09:42 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int neg;
	int r;

	i = 0;
	neg = 0;
	while (i < length - 1)
	{
		r = f(tab[i], tab[i + 1]);
		if (!i && r < 0)
			neg = 1;
		else if (r < 0 && !neg)
			return (0);
		else if (r > 0 && neg)
			return (0);
		i++;
	}
	return (1);
}
