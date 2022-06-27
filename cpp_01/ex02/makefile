NAME = main

FILES = ./main.cpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

CC = g++

OBJ = $(FILES:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -f -r *.o

fclean: clean
	rm -f -r $(NAME)

re: fclean all
