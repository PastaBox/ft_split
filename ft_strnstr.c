/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:15:22 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/11 14:47:37 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				j;
	unsigned int	count;

	i = 0;
	j = 0;
	if (s2[0] == '\0')
		return ((char*)&s1[0]);
	while (s1[i] != '\0')
	{
		count = i;
		j = 0;
		while (s1[count] == s2[j] && count < n && s2[j] != '\0')
		{
			count++;
			j++;
		}
		if (s2[j] == '\0')
			return ((char*)&s1[i]);
		i++;
	}
	return (NULL);
}
