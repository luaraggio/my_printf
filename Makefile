# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lraggio <lraggio@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 20:23:28 by lraggio           #+#    #+#              #
#    Updated: 2024/09/29 02:46:14 by lraggio          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

COMPILER = cc

CFLAGS = -Wall -Wextra -Werror -g

SRCS =	srcs/ft_itoa_base.c \
		srcs/ft_print_char.c \
		srcs/ft_print_decimal.c \
		srcs/ft_print_hexa.c \
		srcs/ft_print_pointer.c \
		srcs/ft_print_string.c \
		srcs/ft_print_un.c \
		srcs/ft_utoa_base.c \
		srcs/ft_printf.c

OBJS = $(SRCS:.c=.o)

all:$(NAME)
	@echo "✅ libft is ready to be used"

$(NAME): $(OBJS)
	$(COMPILER) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)
	@echo "📤 Objects deleted"

fclean: clean
	rm -f $(NAME)
	@echo "🧼 All cleaned"

re:	fclean all

val: re
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

.PHONY: all clean fclean re
