/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 18:07:53 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/05 01:39:02 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int tmp;

	i = 1;
	while (i<size)
	{
		tmp = tab[i];
		j = i - 1;
		while (j>=0 && tab[j+1]<tab[j])
		{
			tab[j+1] = tab[j];
			tab[j] = tmp;
			j--;
		}
		i++;
	}
}
