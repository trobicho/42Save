char    *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	char dest[100], src[20] = "fjdkjfkdjkf";
	ft_strncpy(dest, src, 20);
	printf("%s\n", dest);
}
