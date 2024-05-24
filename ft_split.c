/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilfver <msilfver@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:12:30 by msilfver          #+#    #+#             */
/*   Updated: 2023/11/16 12:01:32 by msilfver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (i == 0)
			{
				i = 1;
				count++;
			}
		}
		else
			i = 0;
		s++;
	}
	return (count);
}

static void	ft_free_str(int i, char **str)
{
	while (i > 0)
	{
		i--;
		free(*(str + i));
	}
	free(str);
}

static char	*word_dup(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (0);
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static int	ft_setstr(const char *s, char **newstr, char c)
{
	size_t	i;
	size_t	j;
	int		index;

	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen((char *)s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen((char *)s)) && index >= 0)
		{
			newstr[j] = word_dup(s, index, i);
			if (!newstr[j])
			{
				ft_free_str(j, newstr);
				return (0);
			}
			index = -1;
			j++;
		}
		i++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**newstr;
	int		words;

	words = ft_countwords((char *)s, c);
	newstr = malloc((words + 1) * sizeof(char *));
	if (!s || !newstr)
		return (0);
	if (!ft_setstr(s, newstr, c))
		return (0);
	newstr[words] = 0;
	return (newstr);
}
