int	ft_str_is_numeric(char *str)
{
	int	is_numeric;

	is_numeric = 1;
	while (str != '\0')
	{
		if (str < '0' || str > '9')
		{
			is_numeric = 0;
			break ;
		}
		str++;
	}
}
