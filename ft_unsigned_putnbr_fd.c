/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_putnbr_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 00:42:28 by abellakr          #+#    #+#             */
/*   Updated: 2021/11/30 00:44:00 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_n(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_unsigned_putnbr_fd(unsigned int number, int fd)
{
	int	i;

	i = len_n(number);
	if (number >= 0 && number <= 9)
		ft_putchar_fd(number + 48, fd);
	else
	{
		ft_unsigned_putnbr_fd((number / 10), fd);
		ft_putchar_fd((number % 10 + 48), fd);
	}
	return (i);
}
