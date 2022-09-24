# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 23:51:55 by sel-kham          #+#    #+#              #
#    Updated: 2022/09/24 23:53:03 by sel-kham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiling
CPP := c++

# Flags
CFLAGS := -Wall -Wextra -Werror
C98 := -std=c++98

# Base variables
NAME := wimp
MAIN := main.cpp

# Makefile basecode
.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(MAIN)
	$(CPP) $(CFLAGS) $(C98) $(MAIN) -o $(NAME)