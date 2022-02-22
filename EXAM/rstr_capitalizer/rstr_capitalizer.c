#include <unistd.h>

int	is_delimiter(char c)
{
	if (c == ' ' || c == '\t' || c == '\0')
		return (1);
	return (0);
}

void	rstr_capitalizer(char *str)
{
	char	tmp;
	while (*str)
	{
		if (is_delimiter(*(str + 1)))
		{
			if(*str >= 'a' && *str <= 'z')
			{
				tmp = *str - ('a' - 'A');
				write(1, &tmp, 1);
			}
			else
				write(1, str, 1);
		}
		else if (*str >= 'A' && *str <= 'Z')
		{
			tmp = *str + ('a' - 'A');
			write(1, &tmp, 1);
		}
		else
			write(1, str, 1);
		str++;
	}	
}

int	main(int ac, char *av[])
{
	int	i;

	if (ac < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 1;
	while (i < ac)
	{
		rstr_capitalizer(av[i]);
		if (i != ac -1)
			write(1, "\n", 1);
		i++;
	}
}
