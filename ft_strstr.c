/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:16:55 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/11 14:48:16 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 0;
	if (s2[0] == '\0')
		return ((char*)&s1[0]);
	while (s1[i] != '\0')
	{
		count = i;
		j = 0;
		while (s1[count] == s2[j])
		{
			count++;
			j++;
			if (s2[j] == '\0')
				return ((char*)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
