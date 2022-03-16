/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpeggie <tpeggie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:32:43 by tpeggie           #+#    #+#             */
/*   Updated: 2021/11/11 14:50:25 by tpeggie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char	*string1, const char	*string2, size_t	num)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *)string1;
	ptr2 = (unsigned char *)string2;
	while (num--)
	{
		if (ptr1[i] != ptr2[i] || ptr1[i] == 0 || ptr2[i] == 0)
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
