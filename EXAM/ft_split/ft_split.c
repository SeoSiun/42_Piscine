#include <stdlib.h>

int	is_delimiter(char c)
{
	if (c == '\n' || c == '\t' || c == ' ' || c == '\0')
		return (1);
	return (0);
}

int	get_word_cnt(char *str)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		while (str[i] && is_delimiter(str[i]))
			i++;
		if (str[i])
			cnt++;
		while (str[i] && !is_delimiter(str[i]))
			i++;
	}
	return (cnt);
}

int	get_word_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] && !is_delimiter(str[i]))
		i++;
	return (i);
}

char	*get_word(char *str, int len)
{
	char *word;
	int	i;

	i = 0;
	word = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	int	cnt;
	int	i;
	int	len;
	char	**words;
	
	i = 0;
	cnt = get_word_cnt(str);
	words = malloc(sizeof(char *) * (cnt + 1));
	while (i < cnt)
	{
		while (*str && is_delimiter(*str))
			str++;
		len = get_word_len(str);
		if (len > 0)
			words[i] = get_word(str, len);
		str = str + len;
		i++;
	}
	words[i] = 0;
	return (words);
}
