/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 15:21:18 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/08 01:03:23 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_isneg(char *str, int *neg);

int		ft_atoi(char *str)
{
	int i;
	int r;
	int neg;

	i = 0;
	r = 0;
	str = ft_isneg(str, &neg);
	while (i < 10 && str[i] >= '0' && str[i] <= '9')
	{
		r *= 10;
		r += str[i] - '0';
		i++;
	}
	return (neg * r);
}

char	*ft_isneg(char *str, int *neg)
{
	int of;

	of = 0;
	*neg = 1;
	while (str[of] == ' ')
	{
		of++;
	}
	if (str[of] == '-')
	{
		*neg = -1;
		of++;
	}
	else if (str[of] == '+')
		of++;
	return (str + of);
}
