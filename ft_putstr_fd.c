/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 00:40:30 by abellakr          #+#    #+#             */
/*   Updated: 2021/11/30 00:42:14 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		i += write (1, "(null)", 6);
	else
	{
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
	return (i);
}
