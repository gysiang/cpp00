# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/19 11:32:40 by gyong-si          #+#    #+#              #
#    Updated: 2024/09/13 09:28:40 by gyong-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Directories
SRC_DIR		:= ./src
OBJ_DIR		:= ./obj

# Compiler and flags
CC 			:= g++
CFLAGS 		:= -Wall -Wextra -Werror -std=c++98
NAME 		:= phonebook
SRC_FILES 	:= PhoneBook.cpp \
			   PhoneBook_Utils.cpp \
			   Contact.cpp \
			   main.cpp

SRC			:= $(addprefix $(SRC_DIR)/, $(SRC_FILES))

OBJ_FILES	:= $(SRC_FILES:.cpp=.o)
OBJ			:= $(addprefix $(OBJ_DIR)/, $(OBJ_FILES))

# Main target
all: $(NAME)

# Link the object files into the final executable
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

# Rule to compile .cpp files to .o files in the obj directory
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Ensure the obj directory exists
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Clean up object files
clean:
	rm -f $(OBJ)

# Full clean (including executable)
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re
