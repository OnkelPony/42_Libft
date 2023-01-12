# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/09 14:16:40 by jimartin          #+#    #+#              #
#    Updated: 2023/01/12 14:36:15 by jimartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CCC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
OBJNAME = libft.o
OBJFILES = ft_atoi.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memset.o ft_strlen.o

# REMOVE THIS!!! 
bin: re main.c
	$(CC) $(CFLAGS) -o main main.c -L. -lft
# REMOVE THIS!!! 

all: $(NAME)

$(NAME): $(OBJFILES) libft.h
	ar rc libft.a *.o

# Define a pattern rule that compiles every .c file into a .o file
%.o : %.c
	$(CC) -c $(CFLAGS)  $< -o $@

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all