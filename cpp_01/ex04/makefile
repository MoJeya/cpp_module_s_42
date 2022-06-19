NAME = main

CC = g++

CFLAGS = -Werror -Wextra -Wall

FILES = $(shell find * -iname "*.cpp")

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(FILES) -o $(NAME)

clean:
	rm -f -r *.o

fclean: clean
	rm -f -r $(NAME)

re: fclean all	