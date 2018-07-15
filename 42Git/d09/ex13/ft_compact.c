/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 10:50:20 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/13 15:49:19 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	delete(char **tab, int index, int size)
{
	int i;

	i = index;
	while (i < size - 1)
	{
		tab[i] = tab[i + 1];
		i++;
	}
}

int		ft_compact(char **tab, int length)
{
	int i;

	i = 0;
	while (i < length)
	{
		if (!tab[i])
		{
			delete(tab, i, length);
			length--;
			i--;
		}
		i++;
	}
	return (length);
}
