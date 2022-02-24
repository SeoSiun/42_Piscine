char	*ft_strrev(char *str)
{
	int	len;
	int	i;
	int	j;
	char	tmp;

	len = 0;
	while (str[len])
		len++;
	i = 0;
	j = len - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}
