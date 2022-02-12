/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kra>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:23:59 by siseo             #+#    #+#             */
/*   Updated: 2022/02/12 15:24:03 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	is_valid_arg(char *str, int view[16])
{
	int	i;
	int	cnt;
	int	flag;

	i = 0;
	cnt = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		while (is_space(str[i]) && str[i++] != '\0')
			flag = 0;
		if ((str[i] >= '1' && str[i] <= '4'))
		{
			if (cnt == 16 || flag == 1)
				return (0);
			view[cnt++] = str[i] - '0';
			i++;
			flag = 1;
		}
		else if (str[i] == '\0' && cnt == 16)
			return (1);
		else
			return (0);
	}
	return (1);
}

int	is_exist_same_line(int board[4][4], int row, int col)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (board[i][col] == board[row][col])
			return (1);
		i++;
	}
	i = 0;
	while (i < col)
	{
		if (board[row][i] == board[row][col])
			return (1);
		i++;
	}
	return (0);
}
