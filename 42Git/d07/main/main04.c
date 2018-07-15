#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int main(int argc, char **argv)
{
	int i;
	char **strtab;

	strtab=ft_split_whitespaces(argv[1]);
	i=0;
	while(strtab[i])
	{
		printf("%s\n", strtab[i]);
		i++;
	}
}
