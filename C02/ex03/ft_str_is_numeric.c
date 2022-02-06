int	ft_str_is_numeric(char *str)
{
	int	is_numeric;
	int i;

	i = 0;
	is_numeric = 1;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			is_numeric = 0;
			break ;
		}
		i++;
	}
	return (is_numeric);
}
