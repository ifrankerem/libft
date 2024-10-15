/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarslan <iarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:39:41 by iarslan           #+#    #+#             */
/*   Updated: 2024/10/15 18:34:16 by iarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_find(char *set, char s1)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*final;
	int		s1size;
	int		i;

	if (!s1 || !set)
		return (NULL);
	s1size = ft_strlen((char *)s1);
	i = 0;
	while (ft_find((char *)set, s1[i]) && s1[i])
		i++;
	s1size = s1size - 1;
	while (ft_find((char *)set, s1[s1size]) && s1size > i)
		s1size--;
	final = ft_substr(s1, i, s1size - i + 1);
	if (!final)
		return (0);
	return (final);
}
