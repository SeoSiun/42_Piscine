#include <unistd.h>

void	putstr(char *str, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;
	char	tmp;
	i = 0;
	while (par[i].str)
	{
		putstr(par[i].str, par[i].size);
		tmp = par[i].size + '0';
		write(1, &tmp, 1);
		write(1, "\n", 1);
		putstr(par[i].copy, par[i].size);
		i++;
	}
}
