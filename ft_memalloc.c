/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_memalloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 08:39:21 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/11 16:29:40 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*tmp;

	tmp = NULL;
	tmp = (void*)malloc(sizeof(void*) * size);
	if (!(tmp))
		return (NULL);
	ft_memset(tmp, 0, size);
	return (tmp);
}
