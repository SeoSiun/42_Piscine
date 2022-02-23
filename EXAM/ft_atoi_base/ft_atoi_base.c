
int	get_value(char c, int str_base)
{
	char	*base = "0123456789abcdef";
	char	*base_ = "0123456789ABCDEF";
	int	i;

	i = 0;
	while (i < str_base)
	{
		if (base[i] == c || base_[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{	
	int	i;
	int	sign;
	int	num;
	int	tmp;

	i = 0;
	sign = 1;
	while (is_space(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (1)
	{
		tmp = get_value(str[i], str_base);
		if (tmp == -1)
			break ;
		num = num * str_base + tmp;
		i++;
	}
	return (sign * num);
}
