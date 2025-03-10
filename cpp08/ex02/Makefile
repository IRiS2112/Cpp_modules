# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/21 17:23:01 by hakaraou          #+#    #+#              #
#    Updated: 2025/01/19 17:03:38 by hakaraou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = MutantStack

HDR = MutantStack.hpp

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)      

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HDR)
	$(CPP) $(FLAGS) -c -o $@ $<

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)
	
re : fclean all

.PHONY : all clean fclean re