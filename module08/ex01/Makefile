# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: coder <coder@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 12:45:24 by lpaulo-d          #+#    #+#              #
#    Updated: 2023/04/26 02:52:13 by coder            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJDIR	=	obj/

F_FILE	=	main.cpp Span.cpp
OBJ		=	$(F_FILE:%.cpp=$(OBJDIR)%.o)

CCP		=	c++
RM		=	rm -rf
P_GUARD	=	mkdir -p $(@D)
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g
NAME	=	ex01

all:		$(NAME)

$(NAME):	$(OBJ)
	$(CCP) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)%.o:	%.cpp
	$(P_GUARD)
	$(CCP) $(CFLAGS) -c $< -o $@

run: all
	./$(NAME)

val: all
	valgrind --leak-check=full --show-leak-kinds=all -s --track-origins=yes ./$(NAME)

clean:
	$(RM) $(OBJDIR)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re run val
