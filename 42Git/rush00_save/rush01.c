/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 23:12:02 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/07 11:16:16 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush01(int x, int y)
{
	int xt;
	int yt;

	yt = 0;
	if (x <=0 )
		y=0;
	while (yt < y)
	{
		xt = 0;
		while (xt < x)
		{
			if ((!yt && !xt) || ((yt == y - 1 && xt == x - 1 && x > 1)))
				ft_putchar('/');
			else if ((!yt && xt == x - 1) || ((yt == y - 1 && !xt)))
				ft_putchar('\\');
			else if (!yt || yt == y - 1)
				ft_putchar('*');
			else if (!xt || xt == x - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			xt++;
		}
		ft_putchar('\n');
		yt++;
	}
}
