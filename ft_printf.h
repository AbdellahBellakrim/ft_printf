/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 23:33:00 by abellakr          #+#    #+#             */
/*   Updated: 2021/11/30 00:51:37 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

//library
# include <stddef.h>
# include <unistd.h>
# include <stdarg.h>
//utils
int	ft_putchar_fd(char c, int fd);
int	ft_putnbr_fd(int n, int fd);
int	ft_putstr_fd(char *s, int fd);
int	ft_unsigned_putnbr_fd(unsigned int number, int fd);
int	ft_putadress_fd(unsigned long long ptr, int fd);
int	ft_hexa_putnbr_fd(unsigned int n, char c, int fd);
//function
int	ft_printf(const char *format, ...);

#endif
