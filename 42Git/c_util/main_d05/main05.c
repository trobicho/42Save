#include <string.h>
#include <stdio.h>
char    *ft_strstr(char *str, char *to_find);

int main(int argc, char **argv)
{
	printf("%s\n", ft_strstr(argv[1], argv[2]));
	printf("%s\n", strstr(argv[1], argv[2]));
}
