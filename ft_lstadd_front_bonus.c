
#include "libft.h"

void	ft_lstadd_front(t_list **list, t_list *new)
{
	if (!list)
		return ;
	if (!*list)
		*list = new;
	else
	{
		new->next = *list;
		*list = new;
	}	
}