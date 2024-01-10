/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_un.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 18:47:58 by lraggio           #+#    #+#             */
/*   Updated: 2024/01/09 18:08:27 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_un(unsigned long n)
{
	int	i;
	char	*s;

	i = 0;
	s = ft_utoa_base(n, 10, "0123456789");
	i = ft_print_string(s);
	free (s);
	return (i);
}
