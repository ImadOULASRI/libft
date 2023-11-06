#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*curr;

	if (!lst || !f || !del)
		return (NULL);
	head = ft_lstnew(lst->content);
	if (!head)
		return (NULL);
	curr = head;
	lst = lst->next;
	while (lst)
	{
		head->next = ft_lstnew(f(lst->content));
		if (!head->next)
		{
			ft_lstclear(&curr, del);
			return (NULL);
		}
		head = head->next;
		lst = lst->next;
	}
	head->next = NULL;
	return (curr);
}