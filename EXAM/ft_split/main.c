#include <stdio.h>
#include "ft_split.c"

int	main(int ac, char *av[])
{
	if (ac != 2)
		return (0);

	char **res;
	int	i;
	
	i = 0;
	res = ft_split(av[1]);
	while (res[i] != 0)
	{
		printf("%s\n", res[i]);
		i++;
	}
	return (0);
}
