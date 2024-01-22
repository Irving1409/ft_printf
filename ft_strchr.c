/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ircaetan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:53:37 by ircaetan          #+#    #+#             */
/*   Updated: 2024/01/22 14:57:36 by ircaetan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0' && *str != (unsigned char)c)
	{
		str++;
	}
	if (*str == (unsigned char)c)
	{
		return ((char *)str);
	}
	return (NULL);
}
