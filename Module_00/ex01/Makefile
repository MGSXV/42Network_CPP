# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 15:14:17 by sel-kham          #+#    #+#              #
#    Updated: 2022/09/20 20:58:11 by sel-kham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiling
CPP := c++

# Flags
CFLAGS := -Wall -Wextra -Werror
C98 := -std=c++98

# Base variables
NAME := phone_book
MAIN := main.cpp
FNAME := PhoneBook Contact
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
