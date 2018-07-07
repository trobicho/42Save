/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 15:39:43 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/06 15:49:17 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i=0;
	while(src[i] != '\0' && i < n)
	{
		if(src[i] != '\0')
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	while(i < n)
	{
		dest[i] = '\0';
	}
	return dest;
}
