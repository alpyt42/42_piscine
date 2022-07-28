# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ale-cont <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/23 14:42:01 by ale-cont          #+#    #+#              #
#    Updated: 2022/07/24 21:14:02 by ale-cont         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME     =    rush-02
SRCS     =    $(shell find . -type f -name *.c)
OBJS     =     $(SRCS:.c=.o)
H         =     header.h lib.h
CFLAGS     =    -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):
			gcc $(CFLAGS) $(SRCS) -o $(NAME)

check:
		norminette

clean:
		rm -f $(OBJS)
		rm -rf $(NAME)_test*

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all check clean fclean re
