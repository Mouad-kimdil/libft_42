#include "mylibrary.h"

t_list	*my_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*full_list;
	t_list	*node;

	if (!lst || !f || !del)
		return (0);
	full_list = NULL;
	while (lst)
	{
		node = my_lstnew(NULL);
		if (node == NULL)
		{
			my_lstclear(&full_list, del);
			return (0);
		}
		node->content = f(lst->content);    //Hello
		my_lstadd_back(&full_list, node);
		lst = lst->next;
	}
	return (full_list);
}
