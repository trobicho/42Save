/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 17:55:01 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/12 18:46:53 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	myft_hour(int hour)
{
	if (hour == 0)
		printf(" 12.00 A.M.");
	else if (hour > 12)
		printf(" %d.00 P.M.", hour - 12);
	else if (hour < 12)
		printf(" %d.00 A.M.", hour);
	else
		printf(" 12.00 P.M.");
}

void	ft_takes_place(int hour)
{
	write(1, "THE FOLLOWING TAKES PLACE BETWEEN", 33);
	myft_hour(hour % 24);
	printf(" AND");
	myft_hour((hour + 1) % 24);
	printf("\n");
}
