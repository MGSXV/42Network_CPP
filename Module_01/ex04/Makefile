# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/25 17:08:16 by sel-kham          #+#    #+#              #
#    Updated: 2022/09/27 02:45:24 by sel-kham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiling
CPP := c++

# Flags
CFLAGS := -Wall -Wextra -Werror
C98 := -std=c++98

# Base variables
NAME := replace
MAIN := main.cpp
FNAME := Weapon HumanA HumanB
REMOVE := rm -rf

# Makefile basecode
.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(MAIN)
	$(CPP) $(CFLAGS) $(C98) $(MAIN) $(SRC) -o $(NAME)

clean:
	$(REMOVE) $(NAME)

fclean: clean

re: fclean all
