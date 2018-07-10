/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trobicho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 16:39:10 by trobicho          #+#    #+#             */
/*   Updated: 2018/07/10 16:55:59 by trobicho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);
void ft_swap(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
int ft_strcmp(char *s1, char *s2);
int ft_putnbr(int nb);

int main(void)
{
	int a=0, b=10012;
	ft_putstr("jfkldsalfjdsla\n");
	ft_putnbr(ft_strlen("jfjdkkfjdk"));
	ft_putchar('\n');
	ft_putnbr(ft_strcmp("jfjdkkfjdk", "jfdfkjd"));
	ft_putchar('\n');
	ft_swap(&a, &b);
	ft_putnbr(a);
	ft_putstr(", ");
	ft_putnbr(b);
	return 0;
}
