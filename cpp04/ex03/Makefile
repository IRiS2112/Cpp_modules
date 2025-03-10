# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/27 18:26:45 by hakaraou          #+#    #+#              #
#    Updated: 2024/08/20 15:16:23 by hakaraou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = a.out

HPP = AMateria.hpp Ice.hpp Cure.hpp Character.hpp ICharacter.hpp \
	IMateriaSource.hpp MateriaSource.hpp

SRC = main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp

OBJ = $(SRC:.cpp=.o)      

all : $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HPP)
	$(CPP) $(FLAGS) -c -o $@ $<

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)
	
re : fclean all

.PHONY : all clean fclean re