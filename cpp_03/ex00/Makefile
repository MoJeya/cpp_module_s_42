NAME = clapTrap

CC = g++

CFLAGS = -Wall -Werror -Wextra -std=c++98

FILES = $(shell find * -iname "*.cpp")

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(CFLAGS) $(FILES) -o $(NAME)

clean:
	rm -f -r *.o

fclean: clean
	rm -f $(NAME)

re: fclean all