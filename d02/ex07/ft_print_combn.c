/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 01:15:15 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/06 12:44:25 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_print_nbr(int n_tab[10], int n)
{
	int i;
	int end;

	i = 0;
	end = 1;
	while (i < n)
	{
		ft_putchar('0' + n_tab[i]);
		if (end && n_tab[i] != 10 - (n - i))
		{
			end = 0;
		}
		i++;
	}
	if (!end)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	return (end);
}

void	inc(int n_tab[10], int n)
{
	int i;
	int end;

	end = 0;
	while (!end && n_tab[0] <= 10 - n)
	{
		end = ft_print_nbr(n_tab, n);
		n_tab[n - 1]++;
		if (n_tab[n - 1] == 10 && n > 1)
		{
			i = 2;
			while (n - i >= 0 && n_tab[n - i] == 10 - i)
			{
				i++;
			}
			n_tab[n - i]++;
			i--;
			while (i >= 1)
			{
				n_tab[n - i] = n_tab[n - i - 1] + 1;
				i--;
			}
		}
	}
}

void	ft_print_combn(int n)
{
	int n_tab[10];
	int i;

	i = 0;
	while (i < n)
	{
		n_tab[i] = i;
		i++;
	}
	inc(n_tab, n);
}
