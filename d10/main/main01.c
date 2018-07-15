void ft_foreach(int *tab, int length, void(*f)(int));
void ft_putnbr(int nbr);

int main(void)
{
	int tab[10] = {100, 4545, -15, 20, 45};
	ft_foreach(tab, 5, &ft_putnbr);
	write(1, '\n', 1);
}
