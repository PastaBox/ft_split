/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 14:50:34 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/11 14:15:00 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int count;

	count = 0;
	if (s1 && s2)
	{
		while (*s1 != '\0' && *s2 != '\0' && count < n)
		{
			if (*s1 != *s2)
				return (0);
			s1++;
			s2++;
		}
	}
	return (1);
}
