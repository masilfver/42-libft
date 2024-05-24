/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilfver <msilfver@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:26:00 by msilfver          #+#    #+#             */
/*   Updated: 2023/11/17 15:47:09 by msilfver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	char			*newstr;
	char			*result;
	unsigned int	i;

	i = 0;
	len = ft_strlen((char *)s);
	newstr = malloc(sizeof(char) * (len + 1));
	if (!newstr)
		return (0);
	result = newstr;
	while (i < len)
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (result);
}
