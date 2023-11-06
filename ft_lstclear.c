#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;
	t_list	*prev;

	curr = *lst;
	if (!curr || !del)
		return ;
	while (curr)
	{
		del(curr->content);
		prev = curr;
		curr = curr->next;
		free(prev);
	}
}