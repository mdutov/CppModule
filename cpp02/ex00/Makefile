# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/19 23:40:14 by tcynthia          #+#    #+#              #
#    Updated: 2022/02/24 17:13:38 by tcynthia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= fixed_00

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

test:		all
			./fixed_00 > out.txt && diff test.txt out.txt

clean:		
			$(RM) $(OBJS)

fclean:		clean
			$(RM) out.txt
			$(RM) ${NAME}

re:			fclean all
