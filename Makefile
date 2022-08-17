# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: njerasea <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/09 20:46:56 by njerasea          #+#    #+#              #
#    Updated: 2022/06/22 00:01:50 by njerasea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
SRCS	= ft_print_str.c\
	  ft_printf.c\
	  ft_print_ptr.c\
	  ft_print_deci.c\
	  ft_print_unsigned.c\
	  ft_print_xhex.c

LIBC	= ar -rcs
CC	= gcc -Wall -Wextra -Werror -std=c99
RM	= rm -rf
OBJS	= $(SRCS:.c=.o)

%o: %c
	$(CC) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
