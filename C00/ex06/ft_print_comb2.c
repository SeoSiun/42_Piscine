/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:07:06 by siseo             #+#    #+#             */
/*   Updated: 2022/02/05 19:43:31 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_output(int f, int s)
{
	char	output[7];
	int		len;

	output[0] = f / 10 + '0';
	output[1] = f % 10 + '0';
	output[2] = ' ';
	output[3] = s / 10 + '0';
	output[4] = s % 10 + '0';
	if (f == 98 && s == 99)
	{
		len = 5;
	}
	else
	{
		output[5] = ',';
		output[6] = ' ';
		len = 7;
	}
	write(1, output, len);
}

void	ft_print_comb2(void)
{
	int	f;
	int	s;

	f = 0;
	while (f < 99)
	{
		s = f + 1;
		while (s < 100)
		{
			write_output(f, s);
			s++;
		}
		f++;
	}
}
