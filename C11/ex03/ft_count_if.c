int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	cnt;
	int	i;

	i = 0;
	cnt = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			cnt++;
		i++;
	}
	return (cnt);
}
