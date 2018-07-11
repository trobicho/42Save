char	**ft_split_whitespaces(char *str);
void    ft_print_words_tables(char **tab);

int main(int argc, char **argv)
{
	char **strtab;

	argc = 0;
	strtab=ft_split_whitespaces(argv[1]);
	ft_print_words_tables(strtab);
}
