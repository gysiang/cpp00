# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/19 11:32:40 by gyong-si          #+#    #+#              #
#    Updated: 2024/09/12 15:40:23 by gyong-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		= g++

CFLAGS 	= -Wall -Wextra -Werror -std=c++98

NAME 	= phonebook

SRCS 	= Phonebook.cpp \
			Contact.cpp \
			main.cpp

OBJS	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:	rm -f $(OBJS)

fclean : clean $(OBJS) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
