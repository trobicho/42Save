#include "ft_iterative_power.h"
#include <stdio.h>

int ft_iterative_power(int a, int p);

int main(int argc, char **argv)
{
	int r;
	
	r=ft_iterative_power(argv[1], argv[2]);
	printf("%d\n", r);
}
