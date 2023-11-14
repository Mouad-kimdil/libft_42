/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkimdil <mkimdil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 02:13:56 by mkimdil           #+#    #+#             */
/*   Updated: 2023/11/09 17:25:45 by mkimdil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*full_list;
	t_list	*node;

	if (!lst || !f || !del)
		return (0);
	full_list = NULL;
	while (lst)
	{
		node = ft_lstnew(NULL);
		if (node == NULL)
		{
			ft_lstclear(&full_list, del);
			return (0);
		}
		node->content = f(lst->content);    //Hello
		ft_lstadd_back(&full_list, node);
		lst = lst->next;
	}
	return (full_list);
}
