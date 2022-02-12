/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kra>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:24:09 by siseo             #+#    #+#             */
/*   Updated: 2022/02/12 15:24:11 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	valid_check(int board[4][4], int view[16]);
int	is_exist_same_line(int board[4][4], int row, int col);

void	print_board(int board[4][4])
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			tmp = board[i][j] + '0';
			write(1, &tmp, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	set_board(int board[4][4], int row, int col, int view[16])
{
	int	i;

	if (row == 4 && valid_check(board, view))
		return (1);
	else if (row == 4)
		return (0);
	else if (col == 4)
		return (set_board(board, row + 1, 0, view));
	else
	{
		i = 1;
		while (i < 5)
		{
			board[row][col] = i;
			if (!is_exist_same_line(board, row, col))
				if (set_board(board, row, col + 1, view))
					return (1);
			i++;
		}
	}
	return (0);
}

void	init_board(int board[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
}
