#include <stdio.h>

char *ft_strdup(char *src);

int main(int argc, char **argv)
{
	printf("%s", ft_strdup(argv[1]));
}
