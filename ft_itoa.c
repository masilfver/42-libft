/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilfver <msilfver@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:47:40 by msilfver          #+#    #+#             */
/*   Updated: 2023/11/16 14:13:33 by msilfver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_itoalen(int nbr)
{
	size_t	len;

	len = 0;
	if (nbr < 1)
		len++;
	while (nbr)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

static long	ft_absval(long n)
{
	long	nbr;

	if (n < 0)
		nbr = -1 * n;
	if (n >= 0)
		nbr = n;
	return (nbr);
}

char	*ft_itoa(int n)
{
	char			*newstr;
	long			nb;
	int				len;
	int				sign;

	sign = 0;
	if (n < 0)
		sign = 1;
	len = ft_itoalen(n);
	newstr = malloc(sizeof(char) * (len + 1));
	if (!newstr)
		return (0);
	nb = ft_absval(n);
	newstr[len] = '\0';
	if (nb == 0)
		newstr[0] = '0';
	while (nb > 0)
	{
		newstr[--len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (sign)
		newstr[0] = '-';
	return (newstr);
}
