#include <stdio.h>
#include "ft_recursive_power.h"

int ft_recursive_power(int a, int p);

int main(int argc, char **argv)
{
	printf("%d\n", ft_recursive_power(argv[1], argv[2]));
	return 0;
}
