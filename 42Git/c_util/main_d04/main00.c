#include <stdio.h>

int ft_iterative_factorial(int nb);

int main(int argc, char **argv)
{
	int r;
	int n;
	
	sscanf(argv[1], "%d", &n);
	r=ft_iterative_factorial(n);
	printf("%d\n", r);
}
