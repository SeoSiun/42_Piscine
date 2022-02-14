int	is_invalid(char *base, int *base_len)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == 32)
			return (1);
		j = 1;
		while (base[i + j] != '\0')
		{
			if (base[i] == base[i + j])
				return (1);
			j++;
		}
		i++;
	}
	*base_len = i;
	return (0);
}

int	convert_num(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	base_len;
	int	i;
	int	j;
	int	num;
	int	tmp_num;

	if (is_invalid(base_from, &base_len))
		return (0);
	i = 0;
	num = 0;
	tmp_num = convert_num(str[i], base_from);
	while (str[i] != '\0')
	{
		j = 0;
		while (base_from[j] != '\0')
		{
			j++;
		num *= base_len;
		num += tmp_num;
		tmp_num = convert_num(str[++i], base_from);
	}
	return put(sign * num);
}
