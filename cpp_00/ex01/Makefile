# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/08 20:13:25 by mjeyavat          #+#    #+#              #
#    Updated: 2022/06/23 12:39:10 by mjeyavat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CFLAGS = -Werror -Wextra -Wall -std=c++98

CC = g++

FILES = main.cpp phonebook.cpp Contacts.cpp

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