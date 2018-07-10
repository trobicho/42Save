 int ft_ultimate_range(int **range, int min, int max)
{
	if(max - min <= 0)
	{
		*range = NULL;
		return 0;
	}
	*range = malloc(sizeof(int) * (max - min));
	i = 0;
	while (i<max - min)
	{
		*range[i] = i + min;
	}
	return (max - min);
}
