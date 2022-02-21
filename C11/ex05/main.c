/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:29:51 by siseo             #+#    #+#             */
/*   Updated: 2022/02/21 11:29:52 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	add(int a, int b);
void	sub(int a, int b);
void	div(int a, int b);
void	mul(int a, int b);
void	mod(int a, int b);

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

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] != '\0' && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (sign * num);
}

void	do_op(char *a, char *b, void(*f)(int, int))
{
	(*f)(ft_atoi(a), ft_atoi(b));
	write(1, "\n", 1);
}

int	main(int ac, char *av[])
{
	void	(*operator[5])(int, int);

	operator[0] = add;
	operator[1] = sub;
	operator[2] = div;
	operator[3] = mul;
	operator[4] = mod;
	if (ac != 4)
		return (0);
	if (av[2][1] != '\0')
		write(1, "0\n", 2);
	else if (av[2][0] == '+')
		do_op(av[1], av[3], operator[0]);
	else if (av[2][0] == '-')
		do_op(av[1], av[3], operator[1]);
	else if (av[2][0] == '/')
		do_op(av[1], av[3], operator[2]);
	else if (av[2][0] == '*')
		do_op(av[1], av[3], operator[3]);
	else if (av[2][0] == '%')
		do_op(av[1], av[3], operator[4]);
	else
		write(1, "0\n", 2);
	return (0);
}
