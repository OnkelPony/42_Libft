# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jimartin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/09 14:16:40 by jimartin          #+#    #+#              #
#    Updated: 2023/01/09 14:16:54 by jimartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CCC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
OBJNAME = libft.o
OBJFILES = ft_atoi.o ft_strlen.o

all: $(NAME)

$(NAME): $(OBJFILES)
	ar rc libft.a *.o

# # Define a pattern rule that compiles every .c file into a .o file
%.o : %.c
	$(CC) -c $(CFLAGS)  $< -o $@

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all