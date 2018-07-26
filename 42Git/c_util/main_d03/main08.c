#include <stdlib.h>
int ft_atoi(char *str);

int main(int argc, char **argv)
{
	printf("%d\n", ft_atoi(argv[1]));
	printf("%d", atoi(argv[1]));
	return 0;
}
