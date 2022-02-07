#include <stdio.h>
#include <string.h>
#include "ft_strlcpy.c"

int	main()
{
	char src[] = "World!";
	char dest[] = "Hello ";
	char dest1[] = "Hello ";

	printf("%d | %s\n", ft_strlcpy(dest, src, 3), dest);
	printf("%lu | %s\n", strlcpy(dest1, src, 3), dest1);
}

