/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ircaetan <ircaetan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:00:55 by ircaetan          #+#    #+#             */
/*   Updated: 2024/01/22 14:31:12 by ircaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	check_format(const char *arg, int i, va_list ap)
{
	if (arg[i + 1] == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (arg[i + 1] == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (arg[i + 1] == 'i' || arg[i + 1] == 'd')
		return (ft_putnbr(va_arg(ap, int)));
	else if (arg[i + 1] == 'p')
		return (ft_putptr(va_arg(ap, long unsigned int)));
	else if (arg[i + 1] == '%')
		return (ft_putchar('%'));
	else if (arg[i + 1] == 'u')
		return (ft_putbase(va_arg(ap, long unsigned int), 10, 0));
	else if (arg[i + 1] == 'X')
		return (ft_putbase(va_arg(ap, long unsigned int), 16, 1));
	else if (arg[i + 1] == 'x')
		return (ft_putbase(va_arg(ap, long unsigned int), 16, 0));
	else
		return (-1);
}
