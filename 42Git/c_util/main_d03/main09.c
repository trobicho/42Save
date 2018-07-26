#include <stdio.h>
#define SIZE 9

void	ft_sort_integer_table(int *tab, int size);

int		main(void)
{
	int tab[SIZE]={5, 8, 4, 1, 7, 3, 0, 8, 9};
	int i;

	ft_sort_integer_table(tab, SIZE);
	i = 0;
	while (i<SIZE)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("\n");
}
