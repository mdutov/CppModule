# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/20 15:19:58 by tcynthia          #+#    #+#              #
#    Updated: 2022/03/27 19:29:34 by tcynthia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Conversion

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
	rm -f $(OBJS_DIR)/*.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

r: all
	bash ./test.sh
