# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcynthia <tcynthia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/09 22:56:45 by tcynthia          #+#    #+#              #
#    Updated: 2022/02/10 01:15:20 by tcynthia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phoneBook

CC = clang++

CFLAGS = -std=c++98 -Wall -Wextra -Werror

HDRS_DIR = ./hdrs
SRCS_DIR = ./
OBJS_DIR = ./objs

HDRS = $(wildcard $(addsuffix /*.hpp, $(HDRS_DIR)))
SRCS = $(wildcard $(addsuffix /*.cpp, $(SRCS_DIR)))
OBJS = $(addprefix objs/, $(notdir $(patsubst %.cpp, %.o, $(SRCS))))

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp $(HDRS)
	$(CC) $(CFLAGS) -o $@ -c $<
	
all: $(NAME)

$(NAME): $(OBJS_DIR) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR):
	mkdir $(OBJS_DIR)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(OBJS_DIR)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
