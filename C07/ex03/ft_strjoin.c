char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		j;
	int		cnt;

	if (size == 0)
		result = malloc(0);
	else
	{
		i = 0;
		cnt = 0;
		while (i < size)
		{
			j = 0;
			while (strs[i][j] != '\0')
				j++;
			cnt += j;
			i++;
		}
		result = malloc(sizeof(char) * (cnt + 1));
		i = 0;
		cnt = 0;
		while (i < size)
		{
			j = 0;
			while (strs[i][j] != '\0')
			{
				result[cnt] = strs[i][j];
				j++;
				cnt++;
			}
			i++;
		}
		result[cnt] = '\0';
	}
	return (result);
}
