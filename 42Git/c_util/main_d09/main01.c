void	ft_takes_place(int hour);

int main(int argc, char **argv)
{
	int h;
	sscanf(argv[1], "%d", &h);
	ft_takes_place(h);
	return 0;
}
