# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: valarcon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 13:18:52 by valarcon          #+#    #+#              #
#    Updated: 2023/01/16 13:18:54 by valarcon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = harl
SRC			= Harl.cpp	main.cpp 
OBJ			= $(SRC:.cpp =.o)
CC          = c++
FLAG		= -Wall -Wextra -Werror
RM          = rm -rf
HEADER      = Harl.hpp


all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
