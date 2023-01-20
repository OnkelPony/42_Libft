# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/09 14:16:40 by jimartin          #+#    #+#              #
#    Updated: 2023/01/20 18:37:16 by jimartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CCC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
OBJNAME = libft.o
OBJFILES = ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o \
ft_isdigit.o ft_isprint.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o \
ft_memset.o ft_split.o ft_strchr.o ft_strjoin.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strncmp.o \
ft_strnstr.o \
ft_strrchr.o ft_strtrim.o ft_substr.o \
ft_tolower.o ft_toupper.o

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
	rm -f $(NAME) main

re: fclean all