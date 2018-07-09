/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 21:54:28 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/09 23:01:08 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	char *c_s1;
	char *c_s2;

	c_s1 = s1;
	c_s2 = s2;
	while (*c_s1 == *c_s2 && *c_s1 && *c_s2)
	{
		if (c_s1 != '\0')
			c_s1++;
		if (c_s2 != '\0')
			c_s2++;
	}
	return (*c_s1 - *c_s2);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	char *c;

	c = str;
	while (*c != '\0')
	{
		ft_putchar(*c);
		c++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 2;
	while (i < argc && argc > 1)
	{
		j = i - 1;
		while (j > 0 && ft_strcmp(argv[j], argv[j + 1]) > 0)
		{
			tmp = argv[j + 1];
			argv[j + 1] = argv[j];
			argv[j] = tmp;
			j--;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
