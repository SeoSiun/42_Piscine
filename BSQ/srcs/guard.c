/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   guard.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhlee <jinhlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:55:16 by jinhlee           #+#    #+#             */
/*   Updated: 2022/02/23 17:04:40 by jinhlee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	_guard_data(t_map_data *data)
{
	if (!data)
		exit(1);
}

void	_free_all(char *buf, t_map_data *data)
{
	free(buf);
	_free_data(data);
	exit(1);
}

void	_guard_buf(char *buf, t_map_data *data)
{
	if (!buf)
	{
		_free_data(data);
		exit(1);
	}
}

void	_guard_map(char *map, t_map_data *data)
{
	if (!map)
	{
		_free_data(data);
		exit(1);
	}
}

void	_guard_temp(char *temp, char *buf, t_map_data *data)
{
	if (!temp)
		_free_all(buf, data);
}
