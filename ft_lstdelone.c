/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 17:32:29 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/11 17:59:59 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	t_list *list;

	list = *alst;
	del(list->content, list->content_size);
	free(*alst);
	*alst = NULL;
}
