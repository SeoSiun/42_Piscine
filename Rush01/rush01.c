#include <unistd.h>

int	up_valid(int board[4][4], int *up)
{
	int	i;
	int	j;
	int	cnt;
	int	max;

	i = 0;
	while (i < 4)
	{
		cnt = 0;
		max = 0;
		j = 0;
		while (j < 4)
		{
			if (max < board[j][i])
			{
				max = board[j][i];
				cnt++;
			}
			j++;
		}
		if (cnt != up[i])
			return (0);
		i++;
	}
	return (1);
}

int	down_valid(int board[4][4], int *down)
{
	int	i;
	int	j;
	int	cnt;
	int	max;

	i = 0;
	while (i < 4)
	{
		cnt = 0;
		max = 0;
		j = 0;
		while (j < 4)
		{
			if (max < board[3-j][i])
			{
				max = board[3-j][i];
				cnt++;
			}
			j++;
		}
		if (cnt != down[i])
			return (0);
		i++;
	}
	return (1);
}

int	left_valid(int board[4][4], int *left)
{
	int	i;
	int	j;
	int	cnt;
	int	max;

	i = 0;
	while (i < 4)
	{
		cnt = 0;
		max = 0;
		j = 0;
		while (j < 4)
		{
			if (max < board[i][j])
			{
				max = board[i][j];
				cnt++;
			}
			j++;
		}
		if (cnt != left[i])
			return (0);
		i++;
	}
	return (1);
}

int right_valid(int board[4][4], int *right)
{
	int	i;
	int	j;
	int	cnt;
	int	max;

	i = 0;
	while (i < 4)
	{
		cnt = 0;
		max = 0;
		j = 0;
		while (j < 4)
		{
			if (max < board[i][3 - j])
			{
				max = board[i][3 - j];
				cnt++;
			}
			j++;
		}
		if (cnt != right[i])
			return (0);
		i++;
	}
	return (1);
}

int	valid_check(int board[4][4], int view[16])
{
	if (!up_valid(board, view))
		return (0);
	if (!down_valid(board, &view[4]))
		return (0);
	if (!left_valid(board, &view[8]))
		return (0);
	if (!right_valid(board, &view[12]))
		return (0);
	return (1);
}

int	is_exist_same_line(int board[4][4], int row, int col)
{
	int i;
	
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
		if(board[row][i] == board[row][col])
			return (1);
		i++;
	}
	return (0);
}	

void	print_board(int board[4][4])
{
	int	i;
	int	j;
	char tmp;

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

void	set_board(int board[4][4], int row, int col, int view[16])
{
	int	i;
	if (row == 4 && valid_check(board, view))
		print_board(board);
	else if (col == 4)
		set_board(board, row + 1, 0, view);
	else
	{
		i = 1;
		while (i < 5)
		{
			board[row][col] = i;
			if (!is_exist_same_line(board, row, col))
				set_board(board, row, col + 1, view);
			i++;
		}
	}
}

int	is_valid_arg(char *str, int view[16])
{
	int	i;
	int	cnt;
	
	i = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (str[i] < '1' || str[i] > '4')
				return (0);
			view[cnt] = str[i] - '0';
			cnt++;
		}
		else if (str[i] != ' ')
			return (0);
		i++;
	}
	if (cnt != 16 || i != 31)
		return (0);
	return (1);
}

void	init_board(int board[4][4])
{
	int i;
	int j;

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

int	main(int argc, char *argv[])
{
	int	view[16];
	int board[4][4];

	if (argc != 2 || !is_valid_arg(argv[1], view))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	init_board(board);
	set_board(board, 0, 0, view);
	return (0);
}
