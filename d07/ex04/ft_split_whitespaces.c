/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 22:41:34 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/11 02:05:57 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_nb_str(char *str)
{
	char	*c;
	int		nb;
	int		last_letter;

	nb = 1;
	last_letter = 0;
	c = str;
	while (*c != '\0')
	{
		if (*c == ' ' || *c == '\t' || *c == '\n')
		{
			if(last_letter)
				nb++;
			last_letter = 0;
		}
		else
			last_letter = 1;
		c++;
	}
	return (nb);
}

int		ft_strlen_wata(char *str)
{
	char	*c;
	int		len;

	if (!str)
		return (0);
	c = str;
	len = 0;
	while (*c != '\0')
	{
		if (*c != ' ' && *c != '\t' && *c != '\n')
			len++;
		c++;
	}
	return len;
}

char	*ft_find_next_str(char *str)
{
	char	*c;
	int		len;

	c = str;
	while (*c != '\0')
	{
		if (*c != ' ' && *c != '\t' && *c != '\n')
			return (c);
		c++;
	}
	return str;
}

char	**ft_split_whitespaces(char *str)
{
	char	**str_split;
	char	*str_nosplit;
	char	*str_tracker;
	int		nbstr;
	int		i;

	str_nosplit = malloc(ft_strlen_wata(str));
	nbstr = ft_nb_str(str);
	printf("%d\n", nbstr);
	str_split = malloc(sizeof(char*) * nbstr + 1);
	str_tracker = str;
	i = 0;
	while(i < nbstr)
	{
		str_tracker = ft_find_next_str(str_tracker);
		str_split[i] = str_tracker;
		i++;
	}
	str_split[nbstr] = 0;
	return (str_split);
}
