# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/13 19:15:31 by mjeyavat          #+#    #+#              #
#    Updated: 2022/06/21 13:45:43 by mjeyavat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CFLAGS = -Werror -Wextra -Wall -std=c++98

CC = g++

FILES = $(shell find ./* -iname "*.cpp")

all: $(NAME)
	@echo $(RED)
	@echo "░█████╗░░░░░░░░░░░░░░░"
	@echo "██╔══██╗░░██╗░░░░██╗░░"
	@echo "██║░░╚═╝██████╗██████╗"
	@echo "██║░░██╗╚═██╔═╝╚═██╔═╝"
	@echo "╚█████╔╝░░╚═╝░░░░╚═╝░░"
	@echo "░╚════╝░░░░░░░░░░░░░░░"
	@echo $(X)

$(NAME):
	$(CC) $(CFLAGS)  $(FILES) -o $(NAME)

clean:
	rm -f -r *.o

fclean: clean
	rm -f -r $(NAME)

re: fclean all
