void ft_putnbr_base(int nbr, char *base);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	ft_putnbr_base(2147483648, "lo ");
	return (0);
}
