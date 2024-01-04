/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 19:40:25 by lraggio           #+#    #+#             */
/*   Updated: 2024/01/04 17:06:56 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_pointer(void *pointer)
{
	int	i;
	char	*p;
	unsigned long	pt;

	pt = (unsigned long) pointer;
	if (pt == 0)
		return (ft_print_string("(nil)"));
	i = 0;
	p = ft_print_utoa(pt, 16, "0123456789abcdef");
	i += ft_print_string("0x");
	i += ft_print_string(p);
	free (p);
	return (i);
}
