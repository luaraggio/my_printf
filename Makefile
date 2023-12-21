# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lraggio <lraggio@student.42.rio>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/22 20:23:28 by lraggio           #+#    #+#              #
#    Updated: 2023/12/21 15:50:31 by lraggio          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

COMPILER = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = 	ft_printchar.c\
	ft_printf.c\
	ft_printstring.c\
	ft_printpointer.c\
	ft_printdecimal.c\
	ft_printinteger.c\
	ft_printu.c\
	ft_printx.c\
	ft_printX.c\
	ft_printpercent.c\

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
