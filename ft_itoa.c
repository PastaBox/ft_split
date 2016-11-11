/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 15:38:05 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/11 14:59:31 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int		ft_size(int nb)
{
	unsigned int count;
	unsigned int n;

	count = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		n = (unsigned int)-nb;
		count++;
	}
	else
		n = (unsigned int)nb;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static unsigned int		ft_isneg(int nb)
{
	if (nb < 0)
		return (1);
	return (0);
}

char					*ft_itoa(int nb)
{
	unsigned int	len;
	int				calc;
	char			*tmp;

	len = ft_size(nb);
	calc = nb;
	tmp = (char*)malloc(sizeof(char) * (len + 1));
	if (!tmp)
		return (NULL);
	tmp[len] = '\0';
	len--;
	if (calc == 0)
		tmp[0] = '0';
	if (calc < 0)
		calc = -nb;
	while (calc > 0)
	{
		tmp[len--] = (calc % 10) + '0';
		calc = calc / 10;
	}
	if (ft_isneg(nb) == 1)
		tmp[0] = '-';
	if (nb == -2147483648)
		return (ft_strdup("2147483648"));
	return (tmp);
}
