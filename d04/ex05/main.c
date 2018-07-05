#include <stdio.h>

int	ft_sqrt(int nb);

int main(void)
{
	int i;
	int r;
	int l;

	i=0;
	l=0;
	while (l < 10000)
	{
		if((r=ft_sqrt(i)))
		{
			printf("%d: %d\n", i, r);
			l++;
		}
		i++;
	}
	return (0);
}
