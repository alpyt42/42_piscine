# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ale-cont <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/28 18:12:12 by ale-cont          #+#    #+#              #
#    Updated: 2022/07/28 18:27:40 by ale-cont         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

.PHONY : all clean fclean re

SRCS = 	srcs/fct.c \
		srcs/main.c \
		srcs/operation.c \

OBJS = ${SRCS:.c=.o}

HEAD = includes
FLAG = -Wall -Wextra -Werror
NAME = do-op
RM = rm -f
CC = gcc

all : ${NAME}

.c.o:
		${CC} ${FLAG} -I ${HEAD} -o $@ -c $<

${NAME}: ${OBJS}
		${CC} ${FLAG} -o $@ $^

clean :
		${RM} ${OBJS}

fclean : clean
		${RM} ${NAME}

re :    fclean all
