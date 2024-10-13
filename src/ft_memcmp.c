/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarslan <iarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:40:06 by iarslan           #+#    #+#             */
/*   Updated: 2024/10/13 16:47:27 by iarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*x;
	unsigned char	*y;

	x = (const unsigned char *)s1;
	y = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (x[i] != y[i])
			return ((int)(x[i] - y[i]));
		i++;
	}
	return (0);
}
