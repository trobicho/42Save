#include <stdio.h>
#include "ft_fibonacci.h"

int main(void)
{
	int i;
	for(i=-1; i<100; i++)
	{
		printf("%d\n", ft_fibonacci(i));
	}
}
