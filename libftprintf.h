/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ircaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:47:00 by ircaetan          #+#    #+#             */
/*   Updated: 2024/01/22 17:57:12 by ircaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	check_format(const char *arg, int i, va_list ap);
char	*ft_strchr(const char *str, int c);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putbase(long unsigned int n, unsigned int base, int up);
int	ft_putptr(long unsigned int p);

#endif
