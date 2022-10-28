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

#include "printf.h"
#include "libft.h"

int	printf(const char *format, ...)
{
	va_list	ptr;
	int		i;

	i = 0;
	va_start(ptr, format);
	while (format[i] != NULL)
	{
		if (format[i] == "%")
		{
			ft_convert(*format);
		}
		else
			write(1, format[i], 1);
		i++;
	}
}