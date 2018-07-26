#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(int argc, char **argv)
{
	char str2[200]="plodppsldjffjdjkfdjfkdjfkdjfkldjklfdsjklfajl;;;;";
	char str[200]="plodppsldjffjdjkfdjfkdjfkdjfkldjklfdsjklfajl;;;;";
	printf("%s\n", ft_strcat(str, argv[1]));
	printf("%s\n", strcat(str2, argv[1 + argc*0]));
}
