/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 09:50:53 by siseo             #+#    #+#             */
/*   Updated: 2022/02/05 11:29:24 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(char first_char, char mid_char, char last_char, int x)
{
	int	x_now;

	x_now = 0;
	while (x_now < x)
	{
		if (x_now == 0)
			ft_putchar(first_char);
		else if (x_now == x - 1)
			ft_putchar(last_char);
		else
			ft_putchar(mid_char);
		x_now++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	y_now;

	y_now = 0;
	while (y_now < y)
	{
		if (y_now == 0)
			print_line('o', '-', 'o', x);
		else if (y_now == y - 1)
			print_line('o', '-', 'o', x);
		else
			print_line('|', ' ', '|', x);
		y_now++;
	}
}
