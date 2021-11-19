# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nchennaf <nchennaf@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/13 17:46:37 by nchennaf          #+#    #+#              #
#    Updated: 2021/11/19 14:33:11 by nchennaf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Werror -Wall -Wextra
NAME = libftprintf.a
AR = ar rcs
SRC =	ft_printf.c \
		ft_putchar_fd_int.c \
		ft_putstr_fd_int.c \
		ft_putnbr_fd.c \
		ft_counter.c \
		ft_base_conv.c \
		ft_putunbr_fd.c \
		#ft_choice.c

OBJ = ${SRC:.c=.o}

all: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJ}
	${AR} ${NAME} ${OBJ}

clean:
	rm -rf *.o

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean
