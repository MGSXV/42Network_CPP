# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/10 18:22:45 by sel-kham          #+#    #+#              #
#    Updated: 2023/03/08 04:57:19 by sel-kham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Colrs
RED := \033[0;31m
WHITE := \033[0;37m
GREEN := \033[0;32m
BLUE := \033[0;34m
YELLOW := \033[0;33m
CYAN := \033[0;36m
BBLACK := \033[1;30m

# Compiling
CPP := c++

# Flags
CFLAGS := -Wall -Wextra -Werror
C98 := -std=c++98

# Base variables
NAME := mutantstack
MAIN := main.cpp
FNAME := MutantStack
REMOVE := rm -rf

# Headers
HEADERS := $(addsuffix .hpp, $(FNAME))

# Source files
TP := $(addsuffix .tpp, $(FNAME))

# Makefile basecode
.PHONY: all clean fclean re

all: $(NAME)
	@echo "\n\t\t$(BBLACK)You are ready to go...$(WHITE)\n"

$(NAME): $(MAIN) $(HEADERS) $(TP)
	@echo "\t$(YELLOW)Compiling $(GREEN)$(NAME) $(CYAN)executable file...$(WHITE)"
	@$(CPP) $(CFLAGS) $(C98) $(MAIN) $(OBJ) -o $(NAME)

clean:
	@echo "\t$(RED)Removing $(CYAN)executable file...$(WHITE)"
	@$(REMOVE) $(NAME)

fclean: clean
	@echo "\t$(RED)Removing $(CYAN)executable file $(GREEN)$(NAME)...$(WHITE)"

re: fclean all
