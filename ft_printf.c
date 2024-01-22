/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ircaetan <ircaetan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:38:07 by ircaetan          #+#    #+#             */
/*   Updated: 2024/01/22 14:41:56 by ircaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		result;
	va_list	ap;

	i = 0;
	result = 0;
	va_start(ap, format);
	while (format[i])
	{
		if ((format[i] == '%') && (ft_strchr("cdiupsxX%", format[i + 1])))
		{
			result += check_format(format, i, ap);
			i++;
		}
		else
			result += ft_putchar(format[i]);
		i++;
	}
	va_end(ap);
	return (result);
}
/*
int	main()
{
	ft_printf("%s\n %c\n %x\n %X\n", "test", 'c', 11, 11);
}*/
