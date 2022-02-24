#include <unistd.h>

int	main(int ac, char *av[])
{
	char	tmp;
	int		offset;
	int		i;

	offset = 'a' - 'A';
	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				tmp = av[1][i] - offset;
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				tmp = av[1][i] + offset;
			else
				tmp = av[1][i];
			write(1, &tmp, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
