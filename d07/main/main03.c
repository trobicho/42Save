#include <stdio.h>

char	*ft_concat_params(int argc, char **argv);

int main(int argc, char **argv)
{
	int i;
	char *str=ft_concat_params(argc, argv);

	printf("%s\n", str);
}
