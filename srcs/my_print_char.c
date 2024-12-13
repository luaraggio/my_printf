#include "../my_printf.h"

int	my_print_char(char c)
{
	write(1, &c, 1);
	return (1);
}
