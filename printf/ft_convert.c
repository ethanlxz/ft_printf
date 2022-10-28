/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlaw <ethanlxz@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:45:12 by etlaw             #+#    #+#             */
/*   Updated: 2022/10/28 16:45:12 by etlaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft.h"

int	ft_convert(va_list args, const char format)
{
    int	length;

    length = 0;
    if (format == 'c')
        length += ft_putchar(va_arg(args, char));
    else if (format == 's')
        length += ft_putstr(va_arg(args,char));
    else if (format == 'p')
       length += 
    else if (format == 'd' || format == 'i')
        length += ft_printnbr(va_arg(args,int));
    else if (format == 'u')
        length += ft_print_unsigned(va_arg(args, unsigned int));
    else if (format == 'x')
        length +=
    else if (format == 'X')
        length +=
    else if (format == '%')
        length += ft_putchar('%');

}