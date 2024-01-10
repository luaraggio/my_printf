# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 20:23:28 by lraggio           #+#    #+#              #
#    Updated: 2024/01/09 20:31:27 by lraggio          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

COMPILER = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = 	ft_print_char.c\
	ft_printf.c\
	ft_print_string.c\
	ft_print_pointer.c\
	ft_print_decimal.c\
	ft_print_un.c\
	ft_print_hexa.c\
	ft_itoa_base.c\
	ft_utoa_base.c\

OBJS = $(SRCS:.c=.o)

RM = rm -rf

all:	$(NAME)

$(NAME):	$(OBJS)
		ar -rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
