/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpeggie <tpeggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 20:53:50 by tpeggie           #+#    #+#             */
/*   Updated: 2022/03/16 20:56:41 by tpeggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
