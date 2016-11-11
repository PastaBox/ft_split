/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 08:59:55 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/11 14:15:10 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	str = NULL;
	str = (char*)malloc(sizeof(char) * (size + 1));
	if (!(str))
		return (0);
	str[size] = '\0';
	ft_memset(str, 0, size);
	return (str);
}
