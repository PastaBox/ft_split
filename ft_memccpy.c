/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:06:29 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/11 14:06:53 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (*(char*)src == c)
		{
			*(char*)dst = c;
			dst++;
			return (dst);
		}
		*(char*)dst = *(char*)src;
		i++;
		dst++;
		src++;
	}
	return (NULL);
}
