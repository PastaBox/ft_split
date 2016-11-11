/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 13:49:43 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/11 14:44:47 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str1;
	char			*str2;
	unsigned int	i;

	str1 = NULL;
	i = 0;
	if (s && f)
	{
		str1 = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
		str2 = str1;
		if (!(str1))
			return (NULL);
		while (s[i])
		{
			str1[i] = f(i, (char)s[i]);
			i++;
		}
		str1[i] = '\0';
	}
	return (str2);
}
