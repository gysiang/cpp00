# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyong-si <gyong-si@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/19 11:35:19 by gyong-si          #+#    #+#              #
#    Updated: 2024/07/19 11:39:46 by gyong-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++11

TARGET = megaphone

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean :
	rm rf $(OBJS) $(TARGET)

.PHONY: all clean
