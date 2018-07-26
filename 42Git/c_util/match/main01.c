#include <stdlib.h>

int nmatch(char *s1, char *s2);

int main(int argc, char **argv)
{
	printf("%d\n", nmatch(argv[1], argv[2]));
	return (0);
}
