/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:07:51 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/11 14:23:06 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	void	*tmp;

	i = 0;
	tmp = b;
	while (i < len)
	{
		*(unsigned char*)b = c;
		b++;
		i++;
	}
	return (tmp);
}
