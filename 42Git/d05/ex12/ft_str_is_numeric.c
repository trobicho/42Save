/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 05:33:04 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/08 05:33:54 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	char *c;

	c=str;
	while (*c != '\0')
	{
		if (!(*c >= '0' && *c <= '9'))
			return 0;
		c++;
	}
	return 1;
}