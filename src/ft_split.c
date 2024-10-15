/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarslan <iarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:43:23 by iarslan           #+#    #+#             */
/*   Updated: 2024/10/15 20:16:57 by iarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char **ft_copy(char **final,char const *s, char c)
{
    int i;
    int j;
    int size;
	int wordnumber;
    size = ft_alphcount(&s,c);
	wordnumber = ft_wordcount(s);
    i = 0;
    while(final[i] == c)
        i++;
    final = malloc(sizeof(char)*size + wordnumber);
    while(s[i])
    {
        
    }
}
int	ft_alphcount(char *x, char y)
{
	int	i;
	int	flag;

	flag = 0;
	i = 0;
	while (x[i] == y)
		i++;
	while (x[i])
	{
		if (x[i] != y)
		{
			flag++;
			i++;
		}
        else
            i++;
	}
	return (flag);
}
int	ft_wordcount(char *x, char y)
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
char	**ft_split(char const *s, char c)
{
	char **final;
	int wordcount;
	wordcount = ft_wordcount(&s, c);
	*final = malloc(sizeof(char *) * wordcount);
    ft_copy
}