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

int	ft_alphcount(char const *x, char y)
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
char **ft_copy(char const *s, char c)
{
	char **final;
	int i;
	int j;
	int k;
	j = 0;
	int size;
	int wordnumber;
	wordnumber =  ft_wordcount(s, c);
	int 
	i = 0;
	size = ft_alphcount(s,c);
	*final = malloc(sizeof(char) * (size +wordnumber));
	while(s[i])
	{	
		j = 0;
		while(s[i] == c)
		{	
			final[k][j] = s[i];
			i++;
			j++;
		}
		final[k][j] = '\0';
		k++;
	}
	return(final);
}

int	ft_wordcount(char const *x, char y)
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
	wordcount = ft_wordcount(s, c);
	*final = malloc(sizeof(char *) * wordcount);
    final = ft_copy(s,c);
	return(final);
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
