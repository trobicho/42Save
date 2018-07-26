#include <string.h>
#include <stdio.h>

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size);

int		main(int argc, char **argv)
{
	char str[1000]="plodppsldjffjdjkfdjfkdjfkdjfkldjklfdsjklfajl;iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii;;;";
	char str2[1000]="plodppsldjffjdjkfdjfkdjfkdjfkldjklfdsjklfajl;iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii;;;";
	printf("%u: %s\n", strlcat(str, argv[1 + argc*0], 20), str);
	printf("%lu: %s\n", ft_strlcat(str2, argv[1 + argc*0], 20), str2);
}
