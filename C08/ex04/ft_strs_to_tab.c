#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	return (cnt);
}

char	*ft_strdup(char *src)
{
	int	i;
	char *dest;
	int	len;

	len = 0;
	i = 0;
	while (src[i] != '\0')
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	len = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] ='\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*result;
	int					i;

	result = (struct s_stock_str*)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		result[i].size = ft_strlen(av[i]);
		result[i].str = av[i];
		result[i].copy = ft_strdup(av[i]);
		if (!result[i].copy)
			return (NULL);
		i++;
	}
	result[i].size = 0;
	return (result);
}
