char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;
	int		len;
	
	i = 0;
	len = 0;
	while (src[i] != '\0')
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	len = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] ='\0';
	return (dest);
}
