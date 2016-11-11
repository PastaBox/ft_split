/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 14:30:32 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/11 14:12:03 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2)
	{
		while (*s1 != '\0' && *s2 != '\0')
		{
			if (*s1 != *s2)
				return (0);
			s1++;
			s2++;
		}
	}
	return (1);
}
