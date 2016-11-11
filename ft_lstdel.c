/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 17:47:28 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/11 18:08:21 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *list;

	list = *alst;
	while (list->next)
	{
		ft_lstdelone(alst, del);
		list = list->next;
		alst = &list;
	}
	ft_lstdelone(alst, del);
}
