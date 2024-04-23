# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: valarcon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 11:56:43 by valarcon          #+#    #+#              #
#    Updated: 2023/02/14 13:49:45 by valarcon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Span.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++
RM = rm -f
CFLAG = -Wall -Wextra -Werror

NAME = span

all: $(NAME)

%.o: %.cpp
	$(CC) $(CFLAG) -c -o $@ $<

$(NAME): $(OBJ)
	$(CC) $(CFLAG) $(OBJ) -o $(NAME)
	@echo "\033[92mWITH EXECUTION THE TEST WILL BE USED AT A PRIME NUMBER GROUP TO 11 AND AT A HUGE RANDOM NUMBER GROUP. \033[0m"

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
