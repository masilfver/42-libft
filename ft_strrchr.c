/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilfver <msilfver@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:40:38 by msilfver          #+#    #+#             */
/*   Updated: 2023/11/17 15:49:15 by msilfver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	counter;

	counter = ft_strlen((char *)s);
	while (counter >= 0)
	{
		if (s[counter] == (unsigned char)c)
			return ((char *)(s + counter));
		counter--;
	}
	return (0);
}
