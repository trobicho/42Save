/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 22:41:34 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/10 22:49:07 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlenSpace(char *str)
{
	int		i;
	char	*c;

	if (!str)
	{
		return (0);
	}
	i = 0;
	c = str;
	while (*c != '\0' && *c!='\0')
	{
		i++;
		c++;
	}
}

char	**ft_split_whitespaces(char *str)
{
}
