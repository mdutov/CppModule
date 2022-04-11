# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/19 23:42:35 by tcynthia          #+#    #+#              #
#    Updated: 2022/02/20 00:34:31 by tcynthia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Sedisforlosers

SRC			= main.cpp

OBJ_NAME	= $(SRC:.cpp=.o)

CC			= clang++ -std=c++98 -Wall -Wextra -Werror

RM			= rm -f

%.o: %.cpp
			$(CC) $(FLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJ_NAME) 
			$(CC) $^ -o $@

clean:		
			$(RM) $(OBJ_NAME)

fclean:		clean
			$(RM) ${NAME}

re:			fclean all
