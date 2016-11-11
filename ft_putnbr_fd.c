/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grleblan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 14:36:56 by grleblan          #+#    #+#             */
/*   Updated: 2016/11/11 14:29:19 by grleblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int x;

	x = nb;
	if (nb < 0)
	{
		x = -nb;
		ft_putchar_fd('-', fd);
	}
	if (x > 10)
	{
		ft_putnbr_fd(x / 10, fd);
		ft_putchar_fd(x % 10 + '0', fd);
	}
	else
		ft_putchar_fd(x + '0', fd);
}
