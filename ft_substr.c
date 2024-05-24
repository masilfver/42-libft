/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilfver <msilfver@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:01:11 by msilfver          #+#    #+#             */
/*   Updated: 2023/11/17 15:47:25 by msilfver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;
	size_t	j;
	size_t	str_len;

	str_len = ft_strlen(s);
	if (start > str_len || str_len == 0)
		return (ft_strdup(""));
	if (len > (str_len - start))
		dst = malloc(((str_len - start) + 1) * sizeof(char));
	else
		dst = malloc((len + 1) * sizeof(char));
	if (!dst)
		return (0);
	i = start;
	j = 0;
	if (start < str_len)
	{
		while ((i < start + len) && s[i] != '\0')
			dst[j++] = s[i++];
	}
	dst[j] = '\0';
	return (dst);
}
