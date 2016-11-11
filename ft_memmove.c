/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 22:31:15 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/11 14:23:21 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	void	*tmp;

	i = 0;
	tmp = NULL;
	tmp = malloc(sizeof(void) * (n));
	if (tmp != NULL)
	{
		ft_memcpy(tmp, src, n);
		ft_memcpy(dest, tmp, n);
	}
	free(tmp);
	return (dest);
}
