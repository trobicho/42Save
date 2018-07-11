/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 18:40:01 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/11 12:47:21 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;
	char	*c;

	if (!str)
	{
		return (0);
	}
	i = 0;
	c = str;
	while (*c != '\0')
	{
		i++;
		c++;
	}
	return (i);
}

int		ft_arglen(int argc, char **argv)
{
	int len;
	int i;

	i = 1;
	len = 0;
	while (i < argc)
	{
		len += ft_strlen(argv[i]);
		i++;
	}
	return (len);
}

void	ft_concat(char *str, int argc, char **argv)
{
	int	i;
	int	k;
	int	j;

	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (j < ft_strlen(argv[i]))
		{
			str[k] = argv[i][j];
			j++;
			k++;
		}
		if (i < argc - 1)
			str[k++] = '\n';
		else
			str[k++] = '\0';
		i++;
	}
}

char	*ft_concat_params(int argc, char **argv)
{
	int		len;
	char	*str;

	len = ft_arglen(argc, argv);
	str = NULL;
	if (len)
	{
		str = malloc(len + argc - 1);
		ft_concat(str, argc, argv);
	}
	return (str);
}
