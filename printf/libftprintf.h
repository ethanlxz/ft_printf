/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etlaw <ethanlxz@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:40:33 by etlaw             #+#    #+#             */
/*   Updated: 2022/10/26 20:50:20 by etlaw            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <./libft/libft.h>
# include <libft.h>

typedef struct s_format
{
	const char	*format;
	va_list		ap;
	size_t		i;
	size_t		len;
}			t_format;

int		printf(const char *format, ...);

int		ft_putchar(int c);
int		ft_putstr(const char *s);
int		ft_printnbr(int n);

int		ft_convert(va_list args, const char format);

#endif