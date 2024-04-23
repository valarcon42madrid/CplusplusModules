# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: valarcon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 13:13:04 by valarcon          #+#    #+#              #
#    Updated: 2023/01/16 13:13:09 by valarcon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = HiThisIsBrain

SRC		=	main.cpp

OBJS = $(SRC:.cpp=.o)

CC = c++

RM = rm -f

CFLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAG) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
