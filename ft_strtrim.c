/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:39:34 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/11 14:51:15 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_graph(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (0);
	return (1);
}

char		*ft_strtrim(char const *s)
{
	unsigned int	i;
	size_t			count;

	i = 0;
	if (!(s))
		return (NULL);
	count = ft_strlen(s);
	count--;
	while (is_graph(s[i]) == 0)
		i++;
	if (i == ft_strlen(s))
		return (ft_strdup(""));
	while (is_graph(s[count]) == 0)
		count--;
	count = count - i + 1;
	return (ft_strsub(s, i, count));
}
