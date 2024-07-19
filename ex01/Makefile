# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/19 11:32:40 by gyong-si          #+#    #+#              #
#    Updated: 2024/07/19 11:41:04 by gyong-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC 		= g++

CFLAGS 	= -Wall -Wextra -Werror -std=c++11

TARGET 	= phonebook

SRCS 	= phonebook.cpp

OBJS	= $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean :
	rm rf $(OBJS) $(TARGET)

.PHONY: all clean fclean re
