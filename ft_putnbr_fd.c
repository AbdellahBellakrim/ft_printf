/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 00:39:03 by abellakr          #+#    #+#             */
/*   Updated: 2021/11/30 00:40:05 by abellakr         ###   ########.fr       */
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
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_putnbr_fd(int n, int fd)
{
	long	number;
	int		i;

	number = (long)n;
	i = len_n(n);
	if (number < 0)
	{
		if (number != -2147483648)
		{
			number = -number;
			ft_putchar_fd('-', fd);
			ft_putnbr_fd(number, fd);
		}
		else
			write(fd, "-2147483648", 11);
	}
	else if (number >= 0 && number <= 9)
		ft_putchar_fd(number + 48, fd);
	else
	{
		ft_putnbr_fd((number / 10), fd);
		ft_putchar_fd((number % 10 + 48), fd);
	}
	return (i);
}
