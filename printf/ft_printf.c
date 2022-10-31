/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlaw <ethanlxz@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:22:17 by etlaw             #+#    #+#             */
/*   Updated: 2022/10/27 15:37:19 by etlaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		length;

	i = 0;
	length = 0;
	va_start(args, format);
	while (format[i] != NULL)
	{
		if (format[i] == "%")
		{
			length += ft_convert(args, format[i + 1]);
		}
		else
			length += ft_putchar(format[i]);
		i++;
	}
}