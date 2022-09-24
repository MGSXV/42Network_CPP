# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/24 19:19:59 by sel-kham          #+#    #+#              #
#    Updated: 2022/09/24 19:44:05 by sel-kham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiling
CPP := c++

# Flags
CFLAGS := -Wall -Wextra -Werror
C98 := -std=c++98

# Base variables
NAME := walkingdeadHorde
MAIN := main.cpp
FNAME := Zombie
REMOVE := rm -rf

# Headers
HEADERS := $(addsuffix .hpp, $(FNAME))

# Source files
SRC := zombieHorde
SRC := $(addsuffix .cpp, $(FNAME)) $(addsuffix .cpp, $(SRC))

# Makefile basecode
.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(HEADERS) $(SRC) $(MAIN)
	$(CPP) $(CFLAGS) $(C98) $(MAIN) $(SRC) -o $(NAME)

clean:
	$(REMOVE) $(NAME)

fclean: clean

re: fclean all
