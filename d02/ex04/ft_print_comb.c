/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 20:03:16 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/03 21:37:42 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	int n0;
	int n1;
	int n2;

	n0 = 0;
	while (n0 <= 7)
	{
		n1 = n0 + 1;
		while (n1 <= 8)
		{
			n2 = n1 + 1;
			while (n2 <= 9)
			{
				ft_putchar(n0 + '0');
				ft_putchar(n1 + '0');
				ft_putchar(n2 + '0');
				ft_putchar(',');
				ft_putchar(' ');
				n2++;
			}
			n1++;
		}
		n0++;
	}
}
