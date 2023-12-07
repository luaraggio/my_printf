/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 21:19:00 by lraggio           #+#    #+#             */
/*   Updated: 2023/12/06 22:31:15 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *, ...)
{
	int	len;
	int	i;
	va_list args;

	va_start(args, s);
	while (*s)
	{
		if (s[i] == '%')
		{
			
			i++;
		}
		else
			ft_printc(*s);
		i++;
	}
	va_end(args);
	return (len);
}
