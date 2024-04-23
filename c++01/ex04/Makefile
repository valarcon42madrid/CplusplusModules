# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: valarcon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 13:17:35 by valarcon          #+#    #+#              #
#    Updated: 2023/01/16 13:17:37 by valarcon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp Reader.cpp
OBJS			= $(SRCS:.cpp=.o)

CC				= c++
RM				= rm -f
FLAG		= -Wall -Wextra -Werror

NAME			= Replace

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(FLAG) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME) *.replace */*.replace

re:				fclean $(NAME)

test:			$(NAME)
				./replace Makefile " " "&"
				./replace Reader.cpp "Sed" "PoTaT0@"
				./replace "cheval" "poney"

.PHONY:			all clean fclean re test
