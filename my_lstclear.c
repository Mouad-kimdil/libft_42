#include "mylibrary.h"

void	my_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next;
	
	if (!del)
		return ;
	if (lst && *lst)
	{
		current = *lst;
		while (current)
		{
			next = current->next;
			del(current->content);
			free(current);
			current = next;
		}
		*lst = NULL;
	}
}
