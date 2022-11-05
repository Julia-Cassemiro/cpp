CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g #-fsanitize=address
RM = rm -rf
NAME = syntax

FILES = main.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(FILES)

run:
	./$(NAME)

valgrind:
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose ./$(NAME)
clean:
	$(RM) $(NAME)