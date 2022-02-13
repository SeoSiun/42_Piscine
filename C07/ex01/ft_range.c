int	*ft_range(int min, int max)
{
	int	size;
	int	*result;
	int	i;

	if (min >= max)
		return (0);
	size = max - min;
	result = malloc(sizeof(int) * size);
	i = 0;
	while (i < size)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
