/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarslan <iarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:48:46 by iarslan           #+#    #+#             */
/*   Updated: 2024/10/14 22:52:21 by iarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strdup(const char *s1)
{
	char	*final;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	final = malloc(sizeof(char) * (len + 1));
	if (!final)
		return (NULL);
	while (s1[i])
	{
		final[i] = s1[i];
		i++;
	}
	final[i] = '\0';
	return (final);
}
