/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarslan <iarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:29:04 by iarslan           #+#    #+#             */
/*   Updated: 2024/10/13 16:39:30 by iarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*x;

	i = 0;
	x = (const unsigned char *)s;
	while (i < n)
	{
		if (x[i] == (unsigned char)c)
			return ((void *)x + i);
		i++;
	}
	return (NULL);
}
