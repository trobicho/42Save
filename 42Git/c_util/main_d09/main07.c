unsigned int ft_collatz_conjecture(unsigned int base);

int main(int argc, char **argv)
{
	int n;
	sscanf(argv[1], "%d", &n);
	printf("%d\n", ft_collatz_conjecture(n));
	return 0;
}
