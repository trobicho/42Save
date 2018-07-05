#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int l;
	int p;

	l=0;
	p=0;
	while (p<10000000)
	{
		if(ft_is_prime(p))
		{
			printf("%d, ", p);
			l++;
		}
		p++;
	}
	printf("\n find: %d, prime\n", l);
	return (0);
}
