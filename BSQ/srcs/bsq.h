/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhlee <jinhlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 10:57:50 by jinhlee           #+#    #+#             */
/*   Updated: 2022/02/23 17:27:25 by jinhlee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# define BUF_SIZE 2147483647

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

typedef struct s_map_data
{
	int		**max_width;
	char	empty;
	char	obstacle;
	char	fill;
	int		x;
	int		y;
}	t_map_data;

int		_atoi(char *str, int n);
int		_read_stdin(t_map_data *data);
int		_read_file(char *file_name, t_map_data *data);
int		_parse(char *buf, t_map_data *data);
int		_valid_map(char *map, t_map_data *data);
int		_is_printable(char c);
char	*_strjoin(char *s1, char *s2);
void	_free_data(t_map_data *data);
void	solve(t_map_data *data);
void	_free_all(char *buf, t_map_data *data);
void	_guard_buf(char *buf, t_map_data *data);
void	_guard_map(char *map, t_map_data *data);
void	_guard_temp(char *temp, char *buf, t_map_data *data);
void	_guard_data(t_map_data *data);

#endif
