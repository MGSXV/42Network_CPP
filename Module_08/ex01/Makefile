# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/31 18:01:34 by sel-kham          #+#    #+#              #
#    Updated: 2023/01/31 19:11:27 by sel-kham         ###   ########.fr        #
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
NAME := span
MAIN := main.cpp
FNAME := Span
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

$(NAME): $(MAIN) $(HEADERS) $(OBJ)
	@echo "\t$(YELLOW)Compiling $(GREEN)$(NAME) $(CYAN)executable file...$(WHITE)"
	@$(CPP) $(CFLAGS) $(C98) $(MAIN) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	@echo "\t$(YELLOW)Compiling $(GREEN)$< $(CYAN)object file...$(WHITE)"
	@$(CPP) $(CFLAGS) $(C98) -c $< -o $@

clean:
	@echo "\t$(RED)Removing $(CYAN)executable file...$(WHITE)"
	@$(REMOVE) $(NAME)

fclean: clean
	@echo "\t$(RED)Removing $(CYAN)executable file $(GREEN)$(NAME)...$(WHITE)"

re: fclean all
