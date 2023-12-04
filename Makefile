# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juca <juca@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/04 11:07:18 by juca              #+#    #+#              #
#    Updated: 2023/12/04 12:08:05 by juca             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

LIB = ar rcs

CFLAGS = -Wall - Werror -Wextra

NAME = libft.a

SRC = ft_strlen.c ft_isdigit.c ft_isalpha.c 
OBJ = $(SRC.c=.o)
INCLUDE = libft.h

all: $(NAME)

%.o: %.c
		$(CC)$(CFLAGS) -c -o $@ $<
clean:
	rm -f $(OBJ) $(NAME)