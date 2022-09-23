# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/23 02:25:18 by sel-kham          #+#    #+#              #
#    Updated: 2022/09/23 21:04:00 by sel-kham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiling
CPP := c++

# Flags
CFLAGS := -Wall -Wextra -Werror
C98 := -std=c++98

# Base variables
NAME := bank_logs
MAIN := tests.cpp
FNAME := Account
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
