/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpeggie <tpeggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:55:58 by tpeggie           #+#    #+#             */
/*   Updated: 2022/03/16 20:56:45 by tpeggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
