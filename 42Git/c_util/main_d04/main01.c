#include <stdio.h>

int ft_recursive_factorial(int nb);

int main(int argc, char **argv)
{
	int r;
	int n;
	
	sscanf(argv[1], "%d", &n);
	r=ft_recursive_factorial(n);
	printf("%d\n", r);
}
