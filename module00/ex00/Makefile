# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgomes-c <jgomes-c@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/01 09:52:40 by jgomes-c          #+#    #+#              #
#    Updated: 2022/09/01 16:27:36 by jgomes-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= megaphone.cpp
OBJS			= $(SRCS:.cpp=.o)

COMP			= c++
RM				= rm -f
C_FLAGS			= -Wall -Wextra -Werror -std=c++98 -I. 

NAME			= megaphone

all:			$(NAME)

$(NAME):		$(OBJS)
				$(COMP) $(C_FLAGS) -o $(NAME) $(OBJS)


clean:
				$(RM) $(OBJS)


fclean:			clean
				$(RM) $(NAME)


re:				fclean $(NAME)


.PHONY:			all clean fclean re