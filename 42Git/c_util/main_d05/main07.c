#include <string.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int main(int argc, char **argv)
{
	int n;
	sscanf(argv[3], "%d", &n);
	printf("%d\n", strncmp(argv[1], argv[2], n));
	printf("%d", ft_strncmp(argv[1], argv[2], n));
}
