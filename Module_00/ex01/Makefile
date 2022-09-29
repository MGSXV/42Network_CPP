# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 15:14:17 by sel-kham          #+#    #+#              #
#    Updated: 2022/09/28 22:11:23 by sel-kham         ###   ########.fr        #
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
NAME := phone_book
MAIN := main.cpp
FNAME := PhoneBook Contact
REMOVE := rm -rf

# Headers
HEADERS := $(addsuffix .hpp, $(FNAME))

# Source files
SRC := $(addsuffix .cpp, $(FNAME))
OBJ := $(SRC:.cpp=.o)

# Makefile basecode
.PHONY: all clean fclean re

all: $(NAME)
	@echo "\n\t\t$(BBLACK)You are ready to go...$(WHITE)\n"

$(NAME): $(HEADERS) $(OBJ) $(MAIN)
	@echo "\t$(YELLOW)Compiling $(GREEN)$(NAME) $(CYAN)executable file...$(WHITE)"
	@$(CPP) $(CFLAGS) $(C98) $(MAIN) $(OBJ) -o $(NAME)
	
%.o: %.cpp $(HEADERS)
	@echo "\t$(YELLOW)Compiling $(GREEN)$< $(CYAN)object file...$(WHITE)"
	@$(CPP) $(CFLAGS) $(C98) -c $< -o $@

clean:
	@echo "\t$(RED)Removing $(CYAN)object files...$(WHITE)"
	@$(REMOVE) $(OBJ)

fclean: clean
	@echo "\t$(RED)Removing $(CYAN)executable file $(GREEN)$(NAME)...$(WHITE)"
	@$(REMOVE) $(NAME)

re: fclean all
