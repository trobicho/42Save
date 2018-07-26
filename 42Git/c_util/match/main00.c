#include <stdlib.h>

int match(char *s1, char *s2);

int main(int argc, char **argv)
{
	printf("%s\n", (match(argv[1], argv[2]) ? "Match" : "Unmatch"));
	return (0);
}
