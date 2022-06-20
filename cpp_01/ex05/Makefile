NAME = Harl

CC = g++

CFLAGS = -Werror -Wextra -Wall

FILES = $(shell find * -iname "*.cpp")

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(FILES) -o $(NAME)

clean:
	rm -f -r *.o

fclean: clean
	rm -f $(NAME)

re: fclean all	