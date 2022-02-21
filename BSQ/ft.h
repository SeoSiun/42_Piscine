typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

typedef struct s_map_data
{
	int		**map;
	char	empty;
	char	obstacle;
	char	fill;
	int		n;
	int		m;
}	t_map_data;
