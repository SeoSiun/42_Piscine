/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:11:57 by siseo             #+#    #+#             */
/*   Updated: 2022/02/17 14:12:39 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	print_int(int nb, int is_negative)
{
	char	to_print;

	if (nb == 0)
	{
		if (is_negative)
			write(1, "-", 1);
		return ;
	}
	print_int(nb / 10, is_negative);
	to_print = (nb % 10) + '0';
	write(1, &to_print, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 0)
		write(1, "0", 1);
	else
	{
		if (nb < 0)
			print_int(-nb, 1);
		else
			print_int(nb, 0);
	}
}

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	while (par[i].str)
	{
		putstr(par[i].str);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		putstr(par[i].copy);
		i++;
	}
}
