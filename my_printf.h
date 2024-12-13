#ifndef MY_PRINTF_H
# define MY_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		convert_format(va_list args, char c);
int		my_printf(const char *s, ...);
int		my_print_char(char c);
int		my_print_string(char *s);
int		my_print_decimal(int dec);
int		my_print_lowerx(unsigned int n);
int		my_print_upperx(unsigned int n);
int		my_print_pointer(void *pointer);
int		my_print_un(unsigned int n);
char	*my_utoa_base(unsigned long long n, int base, char *buffer);
char	*my_itoa_base(int n, int base, char *s);

#endif
