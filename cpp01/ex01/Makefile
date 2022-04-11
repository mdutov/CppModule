# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/19 23:41:22 by tcynthia          #+#    #+#              #
#    Updated: 2022/02/19 23:41:24 by tcynthia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= zombie

CC			= clang++ -std=c++98 -Wall -Wextra -Werror

HDRS		= $(wildcard ./*.hpp)

SRCS		= $(wildcard ./*.cpp)

OBJS	= $(SRCS:.cpp=.o)

RM			= rm -f

%.o: %.cpp 	$(HDRS)
			$(CC) $(FLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS) 
			$(CC) $^ -o $@

clean:		
			$(RM) $(OBJS)

fclean:		clean
			$(RM) ${NAME}

re:			fclean all
