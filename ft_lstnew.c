/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 16:21:10 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/11 17:59:48 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*list;
	void		*tmp;
	size_t		copy_content;

	if (!(list = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!(content))
	{
		list->content = NULL;
		list->content_size = 0;
	}
	else
	{
		tmp = ft_memalloc(content_size);
		copy_content = content_size;
		ft_memcpy(tmp, content, content_size);
		list->content = tmp;
		list->content_size = copy_content;
	}
	list->next = NULL;
	return (list);
}
