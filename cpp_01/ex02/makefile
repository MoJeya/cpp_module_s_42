NAME = main

FILES = "./main.cpp"

CFLAGS = -Wall -Wextra -Werror -std=c++98

CC = g++


$(NAME):
	$(CC) $(CFLAGS) $(FILES) -o $(NAME)

all: $(NAME)

clean:
	rm -f -r *.o

fclean: clean
	rm -f -r $(NAME)

re: fclean all
