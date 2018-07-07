/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 16:16:48 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/06 16:16:57 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
	char *c_str;
	char *c_to;
	char *ptr=0;

	c_str = str;
	c_to = to_find;

	while (*c_str != '\0' && *c_to != '\0')
	{
		if (*c_str == *c_to)
		{
			if(c_to == to_find)
				ptr = c_str;
			c_to++;
		}
		else if(*c_str == *to_find)
		{
			ptr = c_str;
			c_to++;
		}
		else
		{
			c_to = to_find;
			ptr=0;
		}
		c_str++;
	}
	return ptr;
}
