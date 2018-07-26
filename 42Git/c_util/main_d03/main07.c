#include <stdio.h>
char    *ft_strrev(char *str);

int main(void)
{
	char str[10]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	ft_strrev(str);
	printf("%s", str);
	return 0;
}
