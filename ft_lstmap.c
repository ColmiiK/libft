/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:24:43 by alvega-g          #+#    #+#             */
/*   Updated: 2023/09/17 13:28:29 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *aux;


	if (!lst || !f)
		return ;
	while (lst)
	{
		if(del)
		f(lst->content);
		lst = lst->next;
	}
}

	t_list	*node;
	t_list	*next_node;

	if (!lst || !del)
		return ;
	node = *lst;
	while (node)
	{
		del(node->content);
		next_node = node->next;
		free(node);
		node = next_node;
	}
	*lst = 0;