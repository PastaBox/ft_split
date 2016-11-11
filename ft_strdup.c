/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:11:43 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/11 14:33:35 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*dest;
	int		tmp;

	i = 0;
	tmp = 0;
	dest = NULL;
	tmp = ft_strlen(s1);
	if (s1)
	{
		dest = malloc(sizeof(char) * (tmp + 1));
		if (dest != NULL)
		{
			ft_strcpy(dest, s1);
		}
	}
	return (dest);
}
