/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 16:37:58 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/11 14:41:30 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	char			*cpy;

	str = NULL;
	if (!(s1 && s2))
		return (NULL);
	str = (char*)malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	cpy = str;
	if (!(str))
		return (NULL);
	while (*s2)
	{
		while (*s1)
		{
			*str = *(char*)s1;
			s1++;
			str++;
		}
		*str = *(char*)s2;
		s2++;
		str++;
	}
	*str = '\0';
	return (cpy);
}
