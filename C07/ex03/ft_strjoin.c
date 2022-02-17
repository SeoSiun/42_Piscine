/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:42:15 by siseo             #+#    #+#             */
/*   Updated: 2022/02/16 19:41:55 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_strs_len(int size, char **strs)
{
	int	i;
	int	j;
	int	strs_len;

	i = 0;
	strs_len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			j++;
		strs_len += j;
		i++;
	}
	return (strs_len);
}

char	*init_result(int size, char **strs, char *sep)
{
	char	*result;
	int		strs_len;
	int		sep_len;

	if (size == 0)
	{
		result = malloc(sizeof(char) * 1);
		if (!result)
			return (0);
		result[0] = '\0';
	}
	else
	{
		strs_len = get_strs_len(size, strs);
		sep_len = 0;
		while (sep[sep_len] != '\0')
			sep_len++;
		result = malloc(sizeof(char) * (strs_len + ((size - 1) * sep_len) + 1));
		if (!result)
			return (0);
	}
	return (result);
}

void	join(int size, char **strs, char *sep, char *result)
{
	int	i;
	int	j;
	int	cnt;

	i = 0;
	cnt = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			result[cnt] = strs[i][j++];
			cnt++;
		}
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
		{
			result[cnt] = sep[j++];
			cnt++;
		}
		i++;
	}
	result[cnt] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;

	result = init_result(size, strs, sep);
	if (!result)
		return (0);
	if (size != 0)
		join(size, strs, sep, result);
	return (result);
}
