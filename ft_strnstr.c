/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilfver <msilfver@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:59:52 by msilfver          #+#    #+#             */
/*   Updated: 2023/11/17 15:49:07 by msilfver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	pos;
	int		i;

	pos = 0;
	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len)
	{
		i = 0;
		pos = len;
		while (*(haystack + i) == needle[i] && pos-- && *(haystack + i))
		{
			i++;
			if (!needle[i])
				return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (0);
}
