/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:16:15 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/11 14:47:01 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			tmp = (char*)&s[i];
		}
		i++;
	}
	if (c == 0 && c == s[i])
		return ((char*)&s[i]);
	return (tmp);
}
