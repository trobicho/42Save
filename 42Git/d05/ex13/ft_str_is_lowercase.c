/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 05:43:40 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/08 05:44:25 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	char *c;

	c=str;
	while (*c != '\0')
	{
		if (!(*c >= 'a' && *c <= 'z'))
			return 0;
		c++;
	}
	return 1;
}