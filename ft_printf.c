/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 21:19:00 by lraggio           #+#    #+#             */
/*   Updated: 2023/12/19 19:19:44 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_printformat(va_list args, char *s)
{
	if (*s == 's')
		ft_printstring(*s);
	if (*s == 'p')
		ft_printpointer();
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
				ft_printformat(*s);
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
