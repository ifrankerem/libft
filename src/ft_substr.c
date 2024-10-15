/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarslan <iarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:57:00 by iarslan           #+#    #+#             */
/*   Updated: 2024/10/15 00:03:40 by iarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*final;
	size_t	i;
	size_t	j;
	size_t	strsize;

	strsize = ft_strlen(s);
	j = 0;
	i = 0;
	final = malloc(sizeof(char) * (len + 1));
	if (!final)
		return (NULL);
	while (i < len && s[i + start])
	{
		final[j] = s[i + start];
		j++;
		i++;
	}
	final[j] = '\0';
	return (final);
}
