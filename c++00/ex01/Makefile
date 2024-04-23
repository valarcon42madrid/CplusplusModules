# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: valarcon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 12:56:45 by valarcon          #+#    #+#              #
#    Updated: 2023/01/10 12:56:47 by valarcon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS        = main.cpp Contacto.cpp Anuario.cpp 
OBJS        = $(SRCS:.cpp=.o)

CXX         = c++
RM          = rm -f
CXXFLAG     = -Wall -Wextra -Werror

NAME        = PhoneBook

all:        $(NAME)

$(NAME):    $(OBJS)
				$(CXX) $(CXXFLAG) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:     clean
				$(RM) $(NAME)

re:         fclean $(NAME)

.PHONY:     all clean fclean re
