#include <string.h>
#include <stdio.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size);

int		main(int argc, char **argv)
{
	char str[]="1234";
	char str2[]="1234";
	printf("%u: %s\n", strlcpy(str, argv[1 + argc*0], 1), str);
	printf("%lu: %s\n", ft_strlcpy(str2, argv[1 + argc*0], 1), str2);
}
