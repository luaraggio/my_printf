/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:24:19 by lraggio           #+#    #+#             */
/*   Updated: 2023/12/19 19:05:29 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printstring(char *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}