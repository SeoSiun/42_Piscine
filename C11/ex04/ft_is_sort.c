int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int first;

	i = 0;
	while (i < length - 1)
	{
		if (i == 0)
			first = (*f)(tab[i], tab[i + 1]);
		if ((*f)(tab[i], tab[i + 1]) * first < 0)
			return (0);
		i++;
	}
	return (1);
}
