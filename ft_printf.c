/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 21:19:00 by lraggio           #+#    #+#             */
/*   Updated: 2023/12/21 16:01:43 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static unsigned int	convert_format(va_list args, const char *s)
{
	if (*s == 'c')
		return (ft_printchar(va_arg(args, int));
	if (*s == 's')
		return (ft_printstring(va_arg(args, int));
	if (*s == 'p')
		return (ft_printpointer(va_arg(args, int));
	if (*s == 'i')
		return (ft_printdecimal());
	if (*s == 'd')
		return (ft_printinteger());
	if (*s == 'u')
		return (ft_printun());
	if (*s == 'x')
		return (ft_printx());
	if (*s == 'X')
		return (ft_printX());
	return (0);
}  

int	ft_printf(const char *s, ...)
{
	int	len;
	int	i;
	va_list args;

	i = 0;
	va_start(args, s);
	while (*s)
	{
		if (s[i] == '%')
		{
			if (s[i + 1] == '%')
			{
					ft_printpercent(*s);
			}
			else if (s[i + 1] != '%')
			{
				convert_format(*s);
			}
			i++;
		}
		else
			ft_printchar(*s);
		i++;
	}
	va_end(args);
	return (len);
}
