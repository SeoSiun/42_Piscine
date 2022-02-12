int	up_valid(int **board, int *up)
{

}

int	down_valid(int **board, int *down)
{

}

int	left_valid(int **board, int *left)
{

}

int right_valid(int **board, int *right)
{

}

int	valid_check(int** board, int *view)
{
	if (!up_valid(board, view))
		return (0);
	if (!down_valid(board, &view[4]))
		return (0);
	if (!left_valid(board, &view[8]))
		return (0);
	if (!right_valid(board, &view[12]));
		return (0);
	return (1);
}

int	is_exist_same_line(board, row, col)
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

void	print_board(int **board)
{

}

void	set_board(int **board, int row, int col, int *view)
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

int	is_valid_arg(char *str, int *view)
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
	if (cnt != 4)
		return (0);
	return (1);
}

void	init_board(int** board)
{
	int i;
	int j;

	board = malloc(sizeof(int *) * 4);
	i = 0;
	while (i < 4)
	{
		board[i] = malloc(sizeof(int) * 4);
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
	int	*view;
	int **board;

	view = malloc(sizeof(int) * 4);
	if (argc != 2 || !is_valid_arg(argv[1], view))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	init_board(board);
	set_board(board, 0, 0, view);
	return (0);
}
