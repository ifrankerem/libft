/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarslan <iarslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:43:23 by iarslan           #+#    #+#             */
/*   Updated: 2024/10/25 13:41:20 by iarslan          ###   ########.fr       */
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
static char *copy_word(const char *s, int start, int end)
{
	char *word;
	int j;
	j = 0;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	while (start < end)
		word[j++] = s[start++];
	word[j] = '\0';
	return (word);
}

char **ft_copy(char const *s, char c)
{
	char **final;
	int i;
	int k;
	i = 0;
	k = 0;
	final = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!final)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			int start = i;
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
char **ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	return (ft_copy(s, c));
}
int main()
{	
	int i;
	i = 0;
	char *x = "42 turkiye naber";
	char **y = ft_split(x,' ');
	while(y[i])
	{
		printf("%s\n",y[i]);
		i++;
	}
}
