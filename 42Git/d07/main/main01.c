#include <stdio.h>

int	*ft_range(int min, int max);

int main(int argc, char **argv)
{
	int i;
	int min=48, max=100;
	int *tab=ft_range(min, max);

	while (i < max-min)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
