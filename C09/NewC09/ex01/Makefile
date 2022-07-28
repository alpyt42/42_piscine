# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ale-cont <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/21 11:21:22 by ale-cont          #+#    #+#              #
#    Updated: 2022/07/28 14:41:22 by ale-cont         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS =	srcs/ft_putchar.c \
		srcs/ft_swap.c \
		srcs/ft_putstr.c \
		srcs/ft_strlen.c \
		srcs/ft_strcmp.c

OBJS = ${SRCS:.c=.o}

CC = gcc

HEAD = includes

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

LIB = ar rc

LLIB = ranlib

RM = rm -f

.c.o:
	${CC} ${FLAGS} -I${HEAD} -c $< -o ${<:.c=.o}

libft.a:	commands

all:	${NAME}

commands:	${OBJS}
	${LIB} ${NAME} ${OBJS}
	${LLIB} ${NAME}

clean:
	${RM} ${OBJS}

fclean:		clean
	${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
