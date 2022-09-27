# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/27 02:48:20 by sel-kham          #+#    #+#              #
#    Updated: 2022/09/27 22:17:39 by sel-kham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiling
CPP := c++

# Flags
CFLAGS := -Wall -Wextra -Werror
C98 := -std=c++98

# Base variables
NAME := harl
MAIN := main.cpp
FNAME := Harl
REMOVE := rm -rf

# Headers
HEADERS := $(addsuffix .hpp, $(FNAME))

# Source files
SRC := $(addsuffix .cpp, $(FNAME))

# Makefile basecode
.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(HEADERS) $(SRC) $(MAIN)
	$(CPP) $(CFLAGS) $(C98) $(MAIN) $(SRC) -o $(NAME)

clean:
	$(REMOVE) $(NAME)

fclean: clean

re: fclean all
