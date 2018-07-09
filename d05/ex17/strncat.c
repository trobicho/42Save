
char	*ft_strcat(char *dest, char *src, int nb)
{
	char *s1;
	char *s2;

	s1 = dest;
	s2 = src;
	while (*(s1++))
	{
	}
	s1--;
	while (*s2)
	{
		*(s1++) = *(s2++);
	}
	return (dest);
}
