/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilfver <msilfver@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:37:45 by msilfver          #+#    #+#             */
/*   Updated: 2023/11/21 11:11:20 by msilfver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	max_size;

	max_size = -1;
	if (count * size > max_size)
		return (0);
	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (ptr);
	ft_bzero(ptr, count * size);
	return (ptr);
}
