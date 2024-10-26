/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iarslan <iarslan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:36:39 by iarslan           #+#    #+#             */
/*   Updated: 2024/10/26 16:33:29 by iarslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*erase;
	t_list	*current;

	if (!*lst)
		return ;
	current = *lst;
	while (current)
	{
		erase = current;
		del(erase->content);
		free(erase);
		current = current->next;
	}
	*lst = NULL;
}
