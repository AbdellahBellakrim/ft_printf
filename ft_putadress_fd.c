/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 00:33:40 by abellakr          #+#    #+#             */
/*   Updated: 2021/11/30 00:36:33 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_n(unsigned long long n)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

int	ft_putadress_fd(unsigned long long ptr, int fd)
{
	char	*hexa_tab;
	int		i;

	hexa_tab = "0123456789abcdef";
	i = len_n(ptr);
	if (ptr < 16)
		ft_putchar_fd(hexa_tab[ptr], fd);
	else
	{
		ft_putadress_fd(ptr / 16, fd);
		ft_putadress_fd(ptr % 16, fd);
	}
	return (i);
}
