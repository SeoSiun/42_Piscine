#include "ft.h"

int	min(int i, int j, int k);
void _printmap(int max_len, t_point max_pos, t_map_data *data); // 출력할 때 1이 있으면 빈칸띠 ㅋ 

void	solve(t_map_data* data)
{
	t_point	max_pos;
	int		max_len;
	int		i;
	int		j;

	i = 0;
	max_len = -1;
	while (i < data->n)
	{
		j = 0;
		while (j < data->m)
		{
			if (data->map[i][j] == 1 && i > 0 && j > 0)
				data->map[i][j] = min(data->map[i - 1][j], data->map[i][j - 1], data->map[i - 1][j - 1] + 1);
			if (max_len < data->map[i][j])
			{
				max_len = data->map[i][j];
				max_pos.x = i;
				max_pos.y = j;
			}
			j++;
		}
		i++;
	}
	_printmap(max_len, max_pos, data);
}


/* --------------------------------------
int min
void _printmap

전처리
-------------------------------------- */
