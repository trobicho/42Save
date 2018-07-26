#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb);

int		main(int argc, char **argv)
{
	char str[200]="plodppsldjffjdjkfdjfkdjfkdjfkldjklfdsjklfajl;;;;";
	char str2[200]="plodppsldjffjdjkfdjfkdjfkdjfkldjklfdsjklfajl;;;;";
	printf("%s\n", ft_strncat(str, argv[1], -10));
	printf("%s", strncat(str2, argv[1 + argc*0], -10));
}
