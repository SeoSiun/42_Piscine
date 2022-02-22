#include "ft_strcmp.c"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc != 3)
		return (0);
	printf("%d\n", ft_strcmp(argv[1], argv[2]));
	return (0);
}
