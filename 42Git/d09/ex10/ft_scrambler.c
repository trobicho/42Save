/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 11:47:52 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/13 11:49:57 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int tmpa;
	int tmpc;

	tmpa = ***a;
	tmpc = *******c;
	***a = *b;
	*b = ****d;
	*******c = tmpa;
	****d = tmpc;
}
