#include <stdio.h>
#include <unistd.h>

void	print_char_as_hex(char c)
{
	char	*hex_list;

	hex_list = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hex_list[c / 16], 1);
	write(1, &hex_list[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			print_char_as_hex(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}