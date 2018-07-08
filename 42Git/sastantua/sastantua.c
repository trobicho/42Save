/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 10:08:37 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/07 18:31:11 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printoffset(int offset);
void	printramyd(int offset, int baseline, int nbline, int last);
int		la_flemme_f_off(int size);

int		ft_putchar(char c)
{
	write(1, &c, 1);
}

void	sastantua(int size)
{
	int i;
	int bl;
	int nl;
	int of;
	int incl;

	of = la_flemme_f_off(size);
	bl = 3;
	nl = 3;
	incl = 2;
	i = 0;
	while (i < size)
	{
		if (i && i % 2 == 0)
			incl++;
		if (i == size - 1)
			printramyd(of, bl, nl, 1);
		else
			printramyd(of, bl, nl, 0);
		bl += nl * 2 + incl * 2;
		of -= nl + incl;
		nl++;
		i++;
	}
}

int		la_flemme_f_off(int size)
{
	int i;
	int nl;
	int of;
	int incl;

	i = 0;
	of = 2;
	nl = 3;
	incl = 2;
	if (size < 2)
		return (of);
	i = 1;
	while (i < size)
	{
		nl++;
		of += nl + incl;
		if (i && i % 2 == 0)
			incl++;
		i++;
	}
	return (of);
}

void	printoffset(int offset)
{
	int i;

	i = 0;
	while (i < offset)
	{
		ft_putchar(' ');
		i++;
	}
}

void	printramyd(int offset, int baseline, int nbline, int last)
{
	int y;
	int x;
	int dx;
	int dy;

	y = 0;
	dx = 3;
	dy = nbline - (3 - nbline % 2);
	dx = dy;
	while (y < nbline)
	{
		printoffset(offset - y);
		x = 0;
		while (x < baseline + y * 2)
		{
			if (!x)
				ft_putchar('/');
			else if (x == baseline + y * 2 - 1)
				ft_putchar('\\');
			else if (last && y >= nbline - dy && x >= (baseline + y * 2) / 2 - dx / 2 && x <= (baseline + y * 2) / 2 + dx / 2)
			{
				if (dx >= 5 && y == nbline - dy / 2 - 1 && x == (baseline + y * 2) / 2 + dx / 2 - 1)
					ft_putchar('$');
				else
					ft_putchar('|');
			}
			else
				ft_putchar('*');
			x++;
		}
		if(!last || y != nbline - 1)
			ft_putchar('\n');
		y++;
	}
}
