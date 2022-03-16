

#include "libft.h"

static void	clear_node_chain(t_list *node, void (*del)(void *))
{
	if (node->next)
		clear_node_chain(node->next, del);
	del(node->content);
	free(node);
}

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst && *lst)
	{
		clear_node_chain(*lst, del);
		*lst = NULL;
	}
}
