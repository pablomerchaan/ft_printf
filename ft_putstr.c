int	putstr(char *str)
{
	int	c;

	c = 0;
	if (str == 0)
		return (ft_putstr("(null)"));
	while (str[c] != \0')
	{
		write (1, &str[c], 1);
		c++;
	}
	return (c);
}
