/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ircaetan <ircaetan@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:50:40 by ircaetan          #+#    #+#             */
/*   Updated: 2024/01/22 15:02:59 by ircaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		i += ft_putchar('-');
		i += ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		i += ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
	{
		i += ft_putnbr(n / 10);
		i += ft_putnbr(n % 10);
	}
	else
		i += ft_putchar(n + 48);
	return (i);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (s[i] != '\0')
	{
		write (1, &s[i++], 1);
	}
	return (i);
}

int	ft_putbase(long unsigned int n, unsigned int base, int up)
{
	int		i;
	char	*hexachars;

	if (up)
		hexachars = "0123456789ABCDEF";
	else
		hexachars = "0123456789abcdef";
	i = 0;
	if (n >= base)
	{
		i += ft_putbase(n / base, base, up);
		i += ft_putbase(n % base, base, up);
	}
	else
		i += ft_putchar(hexachars[n]);
	return (i);
}

int	ft_putptr(long unsigned int p)
{
	int	i;

	if (!p)
		return (ft_putstr("(nil)"));
	i = 0;
	i += ft_putstr("0x");
	i += ft_putbase(p, 16, 0);
	return (i);
}
