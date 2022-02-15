/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:35:52 by siseo             #+#    #+#             */
/*   Updated: 2022/02/14 14:29:14 by siseo            ###   ########.fr       */
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
	int		i;
	int		strs_len;
	int		sep_len;

	if (size == 0)
	{
		result = malloc(sizeof(char) * 1);
		result[0] = '\0';
	}
	else
	{
		i = 0;
		strs_len = get_strs_len(size, strs);
		sep_len = 0;
		while (sep[sep_len] != '\0')
			sep_len++;
		result = malloc(sizeof(char) * (strs_len + ((size - 1) * sep_len) + 1));
	}
	return (result);
}

void	join(int size, char **strs, char *sep, char *result)
{
	int	i;
	int	j;
	int	k;
	int	cnt;

	i = 0;
	cnt = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			result[cnt++] = strs[i][j++];
		k = 0;
		while (sep[k] != '\0' && i < size - 1)
			result[cnt++] = sep[k++];
		i++;
	}
	result[cnt] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;

	result = init_result(size, strs, sep);
	if (size != 0)
		join(size, strs, sep, result);
	return (result);
}
