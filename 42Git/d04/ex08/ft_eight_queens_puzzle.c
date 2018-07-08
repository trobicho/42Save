/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 20:04:45 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/06 00:57:04 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_eight_queens_puzzle(void)
{
	int chess_tab[8];
	int r;

	init(chess_tab);
	r=0;
	while (i < 16777216)
	{
		if (ft_check_chess_tab(check_tab))
			r++;
	}
	return r;
}

int		ft_check_chess_tab(int chess_tab[])
{
	int	i;

}

int		ft_check_queen_pos(int q1, int q2)
{
	int r_diff;
	int c_diff;

	if (q1 / 8 == q2 / 8)
		return 0;
	if (q1 % 8 == q2 % 8)
		return 0;
	r_diff = q1 / 8 - q2 / 8;
	c_diff = q1 % 8 - q2 % 8;
	if (r_diff < 0)
		r_diff = -r_diff;
	if (c_diff < 0)
		c_diff = -c_diff;
	if (r_diff == c_diff)
		return 0;
	return 1;
}

void	init(int chess_tab[])
{
	int i;

	while (i < 8)
	{
		chess_tab[i]=i;
	}
}
