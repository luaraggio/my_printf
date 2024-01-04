/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 21:19:00 by lraggio           #+#    #+#             */
/*   Updated: 2024/01/04 18:54:29 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	convert_format(va_list args, const char *s)
{
	int	len;

	len = 0;
	if (*s == 'c')
		len += ft_print_char(va_arg(args, int));
	if (*s == 's')
		len += ft_print_string(va_arg(args, char *));
	if (*s == 'p')
		len += ft_print_pointer(va_arg(args, void *));
	if (*s == 'd' || *s == 'i')
		len += ft_print_decimal(va_args(args, int));
	if (*s == 'u')
		len += ft_print_un(va_args(args, unsigned long));
	if (*s == 'x')
		len += ft_print_x(va_arg(args, unsigned int);
	if (*s == 'X')
		len += ft_print_X(va_arg(args, unsigned int));
	return (len);
}  

int	ft_printf(const char *s, ...)
{
	int	len;
	int	i;
	va_list args;

	i = 0;
	len = 0;
	va_start(args, s);
	while (*s)
	{
		if (s[i] == '%')
		{
			if (s[i + 1] == '%')
			{
				len += ft_print_percent(*s);
			}
			else if (s[i + 1] != '%')
			{
				len += convert_format(*s);
			}
			i++;
		}
		else
			len += ft_print_char(*s);
		i++;
	}
	va_end(args);
	return (len);
}
