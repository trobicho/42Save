/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 02:56:37 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/13 15:52:45 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	cmp_letter(char a, char b)
{
	if (a >= 'A' && a <= 'Z')
		a = a - 'A' + 'a';
	if (a == b)
		return (1);
	return (0);
}

int	detect(char *str, char *to_detect)
{
	while (*str == ' ')
		str++;
	while (*str && *to_detect)
	{
		if (!cmp_letter(*(str++), *(to_detect++)))
			return (0);
	}
	if (*to_detect)
		return (0);
	if (*str)
	{
		while (*str == ' ')
			str++;
		if (*str)
			return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		if (detect(argv[i], "bauer"))
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
		if (detect(argv[i], "president"))
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
		if (detect(argv[i], "attack"))
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
		i++;
	}
	return (0);
}
