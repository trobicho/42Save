/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 04:59:55 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/08 05:12:27 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	capit(char *c, int f_letter)
{
	if (*c >= 'a' && *c <= 'z')
	{
		if(f_letter)
			*c = *c - 'a' + 'A';
	}
	else if(*c >= 'A' && *c <= 'Z')
	{
		if(!f_letter)
			*c = *c - 'A' + 'a';
	}
}

char	*ft_strcapitalize(char *str)
{
	char *c;
	int f_letter;

	c = str;
	f_letter = 1;
	while (*c)
	{
		if (*c >= '0' && *c <= '9')
			f_letter=0;
		if ((*c >= 'a' && *c <= 'z') || (*c >= 'A' && *c <= 'Z'))
		{
			capit(c, f_letter);
			f_letter=0;
		}
		else
			f_letter=1;
		c++;
	}
	return str;
}
