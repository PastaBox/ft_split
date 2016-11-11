/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 14:36:56 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/11 14:24:02 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	unsigned int x;

	x = nb;
	if (nb < 0)
	{
		x = -nb;
		ft_putchar('-');
	}
	if (x > 9)
	{
		ft_putnbr(x / 10);
		ft_putchar((x % 10) + '0');
	}
	else
		ft_putchar(x + '0');
}
