/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilfver <msilfver@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:41:18 by msilfver          #+#    #+#             */
/*   Updated: 2023/11/17 15:45:50 by msilfver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p;
	unsigned char	*b;

	p = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (n > 0)
	{
		if (*p != *b)
			return (*p - *b);
		n--;
		p++;
		b++;
	}
	return (0);
}
