# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hakaraou <hakaraou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/06 15:49:29 by hakaraou          #+#    #+#              #
#    Updated: 2025/02/11 10:34:22 by hakaraou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = RPN

HDR = RPN.hpp

SRC = main.cpp RPN.cpp

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