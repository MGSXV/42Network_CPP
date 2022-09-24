# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/08 03:10:15 by sel-kham          #+#    #+#              #
#    Updated: 2022/09/24 02:20:19 by sel-kham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiling
CPP := c++

# Flags
CFLAGS := -Wall -Wextra -Werror
C98 := -std=c++98

# Base variables
NAME := megaphone
FNAME := Megaphone
REMOVE := rm -rf

# Source
SRC := $(addsuffix .cpp, $(FNAME))

# Base code for the Makefile
.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	$(REMOVE) $(NAME)

fclean: clean

re: fclean all
