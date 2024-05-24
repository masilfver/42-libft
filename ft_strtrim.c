/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilfver <msilfver@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:58:52 by msilfver          #+#    #+#             */
/*   Updated: 2023/11/17 15:47:22 by msilfver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char				*strcpy;
	size_t				len;
	unsigned int		i;
	unsigned int		j;

	i = 0;
	j = 0;
	len = ft_strlen(s1);
	if (!s1 || !set)
	{
		strcpy = malloc(1);
		strcpy[i] = '\0';
		return (strcpy);
	}
	while (i < len && ft_strchr(set, s1[i]))
		i++;
	while (len - j > 0 && ft_strchr(set, s1[len - j - 1]))
		j++;
	strcpy = ft_substr(s1, i, len - j - i);
	return (strcpy);
}
