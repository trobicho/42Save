int *ft_map(int *tab, int length, int(*f)(int));
void ft_foreach(int *tab, int length, void(*f)(int));

void ft_putnbr_lr(int nbr)
{
	ft_putnbr(nbr);
	write(1, "\n", 1);
}

int ft_mescouilles(int n)
{
	return (n % 2) ? 3*n+1 : n/2;
}

int main(void)
{
	int tab[10] = {100, 4545, -15, 20, 45};
	int *tabr = ft_map(tab, 5, &ft_mescouilles);
	ft_foreach(tab, 5, &ft_putnbr_lr);
	write(1, "\n", 1);
	ft_foreach(tabr, 5, &ft_putnbr_lr);
}
