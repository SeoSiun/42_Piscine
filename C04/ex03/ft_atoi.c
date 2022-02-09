int is_space(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return 1;
	return 0;
}

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] != '\0' && is_space(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (sign * num);
}
		
