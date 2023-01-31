# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jimartin <jimartin@student.42prague.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/09 14:16:40 by jimartin          #+#    #+#              #
#    Updated: 2023/01/31 17:44:51 by jimartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CCC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
OBJNAME = libft.o
OBJFILES = ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o ft_isalpha.o \
ft_isascii.o ft_isdigit.o ft_isprint.o ft_itoa.o ft_memchr.o ft_memcmp.o \
ft_memcpy.o ft_memmove.o ft_memset.o ft_putchar_fd.o ft_putendl_fd.o \
ft_putnbr_fd.o ft_putstr_fd.o ft_split.o ft_strchr.o ft_strdup.o \
ft_striteri.o ft_strjoin.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strmapi.o \
ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_strtrim.o ft_substr.o ft_tolower.o \
ft_toupper.o
BONUS_OBJFILES = ft_lstadd_back.o ft_lstadd_front.o ft_lstclear.o ft_lstdelone.o ft_lstlast.o ft_lstnew.o ft_lstsize.o

# REMOVE THIS!!!
bin: re main.c
	$(CC) $(CFLAGS) -o main main.c -L. -lft
# REMOVE THIS!!!

all: $(NAME)

$(NAME): $(OBJFILES) libft.h
	ar rc libft.a $(OBJFILES)

bonus: $(NAME) $(BONUS_OBJFILES)
	ar rc libft.a $(BONUS_OBJFILES)

# Define a pattern rule that compiles every .c file into a .o file
%.o : %.c
	$(CC) -c $(CFLAGS)  $< -o $@

clean:
	rm -f $(OBJFILES) $(BONUS_OBJFILES)

fclean: clean
	rm -f $(NAME) main

re: fclean all