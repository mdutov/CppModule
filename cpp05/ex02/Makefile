# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/20 16:28:21 by tcynthia          #+#    #+#              #
#    Updated: 2022/03/26 13:18:43 by tcynthia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form28B

CC = clang++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS_DIR = .
HDRS_DIR = .
OBJS_DIR = ./objs

SRCS = $(wildcard $(addsuffix /*.cpp, $(SRCS_DIR)))
HDRS = $(wildcard $(addsuffix /*.hpp, $(SRCS_DIR)))
OBJS = $(addprefix objs/, $(notdir $(patsubst %.cpp, %.o, $(SRCS))))

$(OBJS_DIR)/%.o: %.cpp $(HDRS)
	$(CC) $(CFLAGS) -o $@ -c $<
	
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)
	rm -f *shruberry

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

r: all
	./Form28B
