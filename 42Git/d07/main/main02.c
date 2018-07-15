#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int main(int argc, char **argv)
{
	int i;
	int *tab;
	int min=48, max=1000;

	printf("%d\n", ft_ultimate_range(&tab, min, max));
	while (i < max-min)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
