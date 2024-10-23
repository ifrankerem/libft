#include "libft.h"
#include <stdio.h>
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
int main()
{
    int x = ft_alphcount("123 123 123", ' ');
	printf("%d\n",x);
}