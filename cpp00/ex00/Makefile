# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/09 22:35:47 by tcynthia          #+#    #+#              #
#    Updated: 2022/02/10 00:57:06 by tcynthia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = clang++

CFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS = megaphone.cpp
OBJS = $(notdir $(patsubst %.cpp, %.o, $(SRCS)))

%.o: %.cpp $(HDRS)
	$(CC) $(CFLAGS) -o $@ -c $<
	
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
