# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 13:27:21 by mjeyavat          #+#    #+#              #
#    Updated: 2022/06/28 13:27:25 by mjeyavat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		:= 	Harl

CXX			:= c++
CPPFLAGS 	:= -Werror -Wextra -Wall -std=c++98


FILES 		:= $(shell find ./* -iname "*.cpp")
OBJ 		:= $(FILES:.cpp=.o)
HEADERS		:= $(shell find ./* -name "*.hpp")

all: $(NAME)
	@echo $(RED)
	@echo "░█████╗░░░░░░░░░░░░░░░"
	@echo "██╔══██╗░░██╗░░░░██╗░░"
	@echo "██║░░╚═╝██████╗██████╗"
	@echo "██║░░██╗╚═██╔═╝╚═██╔═╝"
	@echo "╚█████╔╝░░╚═╝░░░░╚═╝░░"
	@echo "░╚════╝░░░░░░░░░░░░░░░"
	@echo $(X)

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CPPFLAGS) -O3 -c $< -o $@

clean:
	rm -f -r *.o

fclean: clean
	rm -f -r $(NAME)

re: fclean all