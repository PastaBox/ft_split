/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:12:43 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/11 14:36:36 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t		lenght;
	size_t		n;
	char		*res;
	const char	*s;

	res = dst;
	s = src;
	n = size;
	lenght = 0;
	while (*res != '\0' && n-- > 0)
		res++;
	lenght = res - dst;
	n = size - lenght;
	if (n == 0)
		return (lenght + ft_strlen(s));
	while (*s != '\0')
	{
		if (n-- != 1)
		{
			*res++ = *s;
		}
		s++;
	}
	*res = '\0';
	return (lenght + (s - src));
}
