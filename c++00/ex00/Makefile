# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: valarcon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/10 12:55:46 by valarcon          #+#    #+#              #
#    Updated: 2023/01/10 12:55:48 by valarcon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS		= megaphone.cpp
OBJS		= $(SRCS:.cpp=.o)

CXX			= c++
RM			= rm -f
CXXFLAG		= -Wall -Wextra -Werror

NAME		= megaphone

all:		$(NAME)

$(NAME):	$(OBJS)
				$(CXX) $(CXXFLAG) -o $(NAME) $(OBJS)

clean:		
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
