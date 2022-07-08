# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjeyavat <mjeyavat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/07 16:55:34 by mjeyavat          #+#    #+#              #
#    Updated: 2022/07/07 17:02:26 by mjeyavat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		:= a.out

CXX			:= c++
CPPFLAGS	:= -Wall -Wextra -Werror -std=c++98


FILES		:= $(shell find ./* -iname "*.cpp")
OBJ			:= $(FILES:.cpp=.o)
HEADERS		:= $(shell find ./* -iname "*.hpp")

RED			= "\033[34m"
X			= "\033[0m"

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
	rm -f -r $(shell find ./* -iname "*.o")

fclean: clean
	rm -f -r $(NAME)

re: fclean all
	