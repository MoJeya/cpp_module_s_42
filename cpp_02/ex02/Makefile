NAME = Fixed

CC = g++

CFLAGS = -Werror -Wall -Wextra -std=c++98

FILES = $(shell find * -iname "*.cpp")

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(CFLAGS) $(FILES) -o $(NAME)

clean:
	rm -f -r *.o

fclean: clean
	rm -f $(NAME)

re: fclean all