CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address
RM = rm -rf
NAME = phoneBook

FILES = Contact.cpp PhoneBook.cpp main.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(FILES)

run:
	./$(NAME)

valgrind:
	valgrind ./$(NAME)
clean:
	$(RM) $(NAME)