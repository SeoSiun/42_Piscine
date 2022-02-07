#include <stdio.h>
#include <string.h>
#include "ft_strcpy.c"

int	main()
{
	char src[] = "beautiful";
	char src1[] = "beautiful";
	char dest[] = "Wo";
	char dest1[] = "Wo";
	printf("%s", ft_strcpy(dest, src));
	printf("\n%s", strcpy(dest1, src1));
}
