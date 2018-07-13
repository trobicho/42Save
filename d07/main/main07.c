char	**ft_split(char *str, char *charset);

int main(int argc, char **argv)
{
	char **strtab;
	int i;

	argc = 0;
	i=0;
	strtab=ft_split(argv[1], " cjd");
	while(strtab[i])
	{
		printf("%s\n", strtab[i]);
		i++;
	}
}
