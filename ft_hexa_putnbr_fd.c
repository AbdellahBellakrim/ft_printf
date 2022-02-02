/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 22:48:41 by abellakr          #+#    #+#             */
/*   Updated: 2021/11/29 22:54:08 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_n(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	if (n == 0)
		i = 1;
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

int	ft_hexa_putnbr_fd(unsigned int n, char c, int fd)
{
	char	*hexa_lower;
	char	*hexa_upper;
	int		i;

	hexa_lower = "0123456789abcdef";
	hexa_upper = "0123456789ABCDEF";
	i = len_n(n);
	if (n < 16)
	{
		if (c == 'x')
			ft_putchar_fd(hexa_lower[n], fd);
		if (c == 'X')
			ft_putchar_fd(hexa_upper[n], fd);
	}
	else
	{
		ft_hexa_putnbr_fd(n / 16, c, fd);
		ft_hexa_putnbr_fd(n % 16, c, fd);
	}
	return (i);
}
