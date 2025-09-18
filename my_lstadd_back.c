#include "mylibrary.h"

void	my_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst)
	{
		*lst = new;
		return ;
	}
	last = my_lstlast(*lst);
	if (!last)
	{
		*lst = new;
		return ;
	}
	last->next = new;
}
