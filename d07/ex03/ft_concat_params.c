/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 18:40:01 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/10 18:58:22 by trobicho         ###   ########.fr       */
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

	while(i < argc)
	{
		len += ft_strlen(argv[i]);
		i++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	int i;
	int len;
	char *str;

	len = 0;
	i = 1;
	str = NULL;
	if(len)
	{
		str = malloc(len + i);
		while(i < argc)
		{
			j=0;
			while(j < ft_strlen(argv[i]))
		}
	}
	return (str);
}
