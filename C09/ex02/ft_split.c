/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siseo <siseo@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:23:22 by siseo             #+#    #+#             */
/*   Updated: 2022/02/17 09:48:51 by siseo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_next_len(char *str, char *charset)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (charset[j] != '\0')
		{
			if (str[i] == charset[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

int	get_word_num(char *str, char *charset)
{
	int	len;
	int	cnt;
	int	i;

	i = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		len = get_next_len(&str[i], charset);
		if (len > 0)
			cnt++;
		i = i + len + 1;
	}
	return (cnt);
}

char	*get_next_word(char *str, int next_len)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc(sizeof(char) * (next_len + 1));
	if (!word)
		return (0);
	while (i < next_len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		word_num;
	int		i;

	word_num = get_word_num(str, charset);
	result = malloc(sizeof(char *) * (word_num + 1));
	if (!result)
		return (0);
	i = 0;
	while (i < word_num)
	{
		if (get_next_len(str, charset) == 0)
		{
			str++;
			continue ;
		}
		result[i] = get_next_word(str, get_next_len(str, charset));
		if (!result[i])
			return (0);
		str = str + get_next_len(str, charset) + 1;
		i++;
	}
	result[i] = 0;
	return (result);
}
