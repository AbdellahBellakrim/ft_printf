/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 22:55:00 by abellakr          #+#    #+#             */
/*   Updated: 2021/11/30 16:42:13 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	format_check(char c, va_list ptr)
{
	int	len;

	len = 0;
	if (c == 'c')
		len = len + ft_putchar_fd(va_arg(ptr, int), 1);
	if (c == 's')
		len = len + ft_putstr_fd(va_arg(ptr, char *), 1);
	if (c == 'u')
		len = len + ft_unsigned_putnbr_fd(va_arg(ptr, unsigned int), 1);
	if (c == 'd' || c == 'i')
		len = len + ft_putnbr_fd(va_arg(ptr, int), 1);
	if (c == 'x' || c == 'X')
		len = len + ft_hexa_putnbr_fd(va_arg(ptr, unsigned int), c, 1);
	if (c == '%')
	{
		len = len + write(1, "%", 1);
	}
	if (c == 'p')
	{
		len = len + ft_putstr_fd("0x", 1);
		len = len + ft_putadress_fd(va_arg(ptr, unsigned long long), 1);
	}
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	ptr;

	va_start (ptr, format);
	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			len = len + format_check(format[i + 1], ptr);
			i++;
		}
		else
			len = len + ft_putchar_fd(format[i], 1);
		i++;
	}
	va_end (ptr);
	return (len);
}
