/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:17:25 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/13 15:52:10 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_unmatch(int *tab, int length)
{
	int i;
	int j;
	int f;

	i = 0;
	while (i < length - 1)
	{
		j = 0;
		f = 0;
		while (j < length)
		{
			if (i == j)
				j++;
			if (tab[i] == tab[j])
			{
				f = 1;
				break ;
			}
			j++;
		}
		if (!f)
			return (tab[i]);
		i++;
	}
	return (tab[length - 1]);
}
