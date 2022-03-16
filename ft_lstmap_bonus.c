

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*head;

	head = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
			ft_lstclear(&head, del);
		if (!head)
			head = node;
		else
			ft_lstadd_back(&head, node);
		lst = lst->next;
	}
	return (head);
}