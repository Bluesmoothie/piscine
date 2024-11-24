# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygille <ygille@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/28 13:31:43 by ygille            #+#    #+#              #
#    Updated: 2024/09/29 19:25:39 by ygille           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	rush-02
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror
INC		=	includes/
SRC		=	srcs/

$(NAME)				:	$(SRC)i_to_word.o $(SRC)key.o $(SRC)alternate_ktov.o $(SRC)parse.o $(SRC)print.o $(SRC)read_dict.o $(SRC)reverse_string.o $(SRC)rush_02.o $(SRC)utils.o
	$(CC) $(CFLAGS) $(SRC)i_to_word.o $(SRC)key.o $(SRC)alternate_ktov.o $(SRC)parse.o $(SRC)print.o $(SRC)read_dict.o $(SRC)reverse_string.o $(SRC)rush_02.o $(SRC)utils.o -o rush-02

$(SRC)i_to_word.o		:	$(SRC)i_to_word.c
	$(CC) $(CFLAGS) -c $(SRC)i_to_word.c -o $(SRC)i_to_word.o

$(SRC)key.o		:	$(SRC)key.c
	$(CC) $(CFLAGS) -c $(SRC)key.c -o $(SRC)key.o

$(SRC)alternate_ktov.o		:	$(SRC)alternate_ktov.c
	$(CC) $(CFLAGS) -c $(SRC)alternate_ktov.c -o $(SRC)alternate_ktov.o

$(SRC)parse.o		:	$(SRC)parse.c
	$(CC) $(CFLAGS) -c $(SRC)parse.c -o $(SRC)parse.o

$(SRC)print.o		:	$(SRC)print.c
	$(CC) $(CFLAGS) -c $(SRC)print.c -o $(SRC)print.o

$(SRC)read_dict.o	:	$(SRC)read_dict.c
	$(CC) $(CFLAGS) -c $(SRC)read_dict.c -o $(SRC)read_dict.o

$(SRC)reverse_string.o	:	$(SRC)reverse_string.c
	$(CC) $(CFLAGS) -c $(SRC)reverse_string.c -o $(SRC)reverse_string.o

$(SRC)rush_02.o		:	$(SRC)rush_02.c
	$(CC) $(CFLAGS) -c $(SRC)rush_02.c -o $(SRC)rush_02.o

$(SRC)utils.o		:	$(SRC)utils.c
	$(CC) $(CFLAGS) -c $(SRC)utils.c -o $(SRC)utils.o

clean	:
	rm -f $(SRC)*.o

fclean	:	clean
	rm -f rush-02