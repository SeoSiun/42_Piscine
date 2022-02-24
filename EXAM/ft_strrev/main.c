#include <stdio.h>
#include "ft_strrev.c"

int	main(int ac, char *av[])
{
	if (ac != 2)
		return (0);
	printf("%s -> ", av[1]);
	printf("%s\n", ft_strrev(av[1]));
}
