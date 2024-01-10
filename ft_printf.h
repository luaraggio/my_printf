/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:44:01 by lraggio           #+#    #+#             */
/*   Updated: 2024/01/09 20:25:14 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	convert_format(va_list args, char c);
int	ft_printf(const char *s, ...);
int	ft_print_char(char c);
int	ft_print_string(char *s);
int	ft_print_decimal(int dec);
int	ft_print_x(unsigned int n);
int	ft_print_X(unsigned int n);
int	ft_print_pointer(void *pointer);
int	ft_print_un(unsigned long n);
char	*ft_utoa_base(unsigned long n, int base, char *buffer);
char	*ft_itoa_base(int n, int base, char *s);

#endif
