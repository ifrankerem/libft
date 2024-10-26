/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarslan <iarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:43:23 by iarslan           #+#    #+#             */
/*   Updated: 2024/10/26 16:34:27 by iarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_wordcount(char const *x, char y)
{
	int	i;
	int	flag;

	flag = 0;
	i = 0;
	while (x[i])
	{
		if ((x[i] != y && x[i + 1] == y) || (x[i] != y && x[i + 1] == '\0'))
			flag++;
		i++;
	}
	return (flag);
}

static char	*copy_word(const char *s, int start, int end)
{
	char	*word;
	int		j;

	j = 0;
	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	while (start < end)
		word[j++] = s[start++];
	word[j] = '\0';
	return (word);
}

char	**ft_copy(char const *s, char c)
{
	char	**final;
	int		i;
	int		k;
	int		start;

	i = 0;
	k = 0;
	final = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!final)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			final[k++] = copy_word(s, start, i);
		}
		else
			i++;
	}
	final[k] = NULL;
	return (final);
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	return (ft_copy(s, c));
}

int	main(void)
{
	int		i;
	char	*x;
	char	**y;

	i = 0;
	x = "42 turkiye naber";
	y = ft_split(x, ' ');
	while (y[i])
	{
		printf("%s\n", y[i]);
		i++;
	}
}
