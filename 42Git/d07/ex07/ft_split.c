/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 15:02:17 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/13 15:10:52 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_cmpnext_str(char *str, char *charset, int cmp)
{
	char	*c;
	int		i;

	c = str;
	if (!cmp)
	{
		while (*c != '\0')
			c++;
		return (c);
	}
	else
	{
		i = 0;
		while (charset[i])
			if (*str == charset[i++])
				return ((char*)1);
		return (0);
	}
}

int		ft_nb_str(char *str, char *charset)
{
	char	*c;
	int		nb;
	int		last_letter;

	nb = 1;
	last_letter = 0;
	if (!str)
		return (0);
	c = str;
	while (*c != '\0')
	{
		if (ft_cmpnext_str(c, charset, 1))
		{
			if (last_letter)
				nb++;
			last_letter = 0;
		}
		else
			last_letter = 1;
		c++;
	}
	return (nb - !last_letter);
}

int		ft_strlen_wata(char *str, char *charset)
{
	char	*c;
	int		len;

	if (!str)
		return (0);
	c = str;
	len = 0;
	while (*c != '\0')
	{
		if (!ft_cmpnext_str(c, charset, 1))
			len++;
		c++;
	}
	return (len);
}

void	ft_strcpy_wata(char *str, char *strdest, char *charset)
{
	char	*c;
	char	*c_dest;
	int		firstspace;

	c = str;
	c_dest = strdest;
	firstspace = 0;
	while (*c != '\0')
	{
		if (!ft_cmpnext_str(c, charset, 1))
		{
			*c_dest = *c;
			c_dest++;
			firstspace = 1;
		}
		else if (firstspace)
		{
			*c_dest = '\0';
			c_dest++;
			firstspace = 0;
		}
		c++;
	}
	*c_dest = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**str_split;
	char	*str_nosplit;
	char	*str_tracker;
	int		nbstr;
	int		i;

	nbstr = ft_nb_str(str, charset);
	str_split = malloc(sizeof(char*) * (nbstr + 1));
	if (nbstr)
	{
		str_nosplit = malloc(ft_strlen_wata(str, charset) + nbstr + 1);
		ft_strcpy_wata(str, str_nosplit, charset);
		str_tracker = str_nosplit;
		str_split[0] = str_nosplit;
		i = 1;
		while (i < nbstr)
		{
			str_tracker = ft_cmpnext_str(str_tracker, charset, 0);
			str_split[i] = ++str_tracker;
			i++;
		}
	}
	str_split[nbstr] = 0;
	return (str_split);
}
