
NAME = megaphone

CFLAGS = -Werror -Wextra -Wall -std=c++98

CC = g++

FILES = megaphone.cpp

RED = "\033[0;31m"

X = "\033[0m"

all: $(NAME)
	@echo $(RED)
	@echo "░█████╗░░░░░░░░░░░░░░░"
	@echo "██╔══██╗░░██╗░░░░██╗░░"
	@echo "██║░░╚═╝██████╗██████╗"
	@echo "██║░░██╗╚═██╔═╝╚═██╔═╝"
	@echo "╚█████╔╝░░╚═╝░░░░╚═╝░░"
	@echo "░╚════╝░░░░░░░░░░░░░░░"
	@echo $(X)

$(NAME): $(FILES)
	$(CC) $(CFLAGS)  $(FILES) -o $(NAME)

clean:
	rm -f -r *.o

fclean: clean
	rm -f -r $(NAME)

re: fclean all