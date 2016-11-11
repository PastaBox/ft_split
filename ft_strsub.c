/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 15:57:39 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/11 14:49:52 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str1;
	char			*str2;
	unsigned int	i;

	str1 = NULL;
	i = 0;
	if (s)
	{
		str1 = (char*)malloc(sizeof(char) * (len + 1));
		str2 = str1;
		if (!(str1))
			return (0);
		while (i < len && s)
		{
			str1[i] = (char)s[start];
			i++;
			start++;
		}
		str1[i] = '\0';
	}
	return (str2);
}
