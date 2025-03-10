# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/16 18:09:28 by hakaraou          #+#    #+#              #
#    Updated: 2024/07/31 16:57:58 by hakaraou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = attack

SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp Weapon.hpp HumanA.hpp HumanB.hpp
	$(CPP) $(FLAGS) -c -o $@ $<

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)
	
re : fclean all

.PHONY : all clean fclean re