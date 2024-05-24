/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msilfver <msilfver@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:06:09 by msilfver          #+#    #+#             */
/*   Updated: 2023/11/17 15:48:03 by msilfver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		if (s[counter] == (char)c)
			return ((char *)&s[counter]);
		counter++;
	}
	if (s[counter] == (char)c)
		return ((char *)&s[counter]);
	return (0);
}
