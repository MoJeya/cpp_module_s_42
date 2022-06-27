NAME = Harl

CC = g++

CFLAGS = -Werror -Wextra -Wall -std=c++98

FILES = $(shell find * -iname "*.cpp")

OBJ = $(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f -r *.o

fclean: clean
	rm -f $(NAME)

re: fclean all	