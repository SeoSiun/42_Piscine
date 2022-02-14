/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 10:03:47 by siseo             #+#    #+#             */
/*   Updated: 2022/02/14 10:03:48 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_queens_pos(int *queens)
{
	int		i;
	char	tmp;

	i = 0;
	while (i < 10)
	{
		tmp = queens[i] + '0';
		write(1, &tmp, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	check_queens(int *queens, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if ((col - i == queens[col] - queens[i])
			|| (col - i == queens[i] - queens[col]))
			return (0);
		if (queens[i] == queens[col])
			return (0);
		i++;
	}
	return (1);
}

void	ft_ten_queens_recursive(int *queens, int col, int *sol_cnt)
{
	int	row;

	if (col == 10)
	{
		print_queens_pos(queens);
		*sol_cnt = *sol_cnt + 1;
		return ;
	}
	row = 0;
	while (row < 10)
	{
		queens[col] = row;
		if (check_queens(queens, col))
			ft_ten_queens_recursive(queens, col + 1, sol_cnt);
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	queens[10];
	int	sol_cnt;

	sol_cnt = 0;
	ft_ten_queens_recursive(queens, 0, &sol_cnt);
	return (sol_cnt);
}
