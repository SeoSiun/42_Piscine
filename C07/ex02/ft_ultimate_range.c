int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	*range = malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		*range[i] = i + min;
		i++;
	}
}
