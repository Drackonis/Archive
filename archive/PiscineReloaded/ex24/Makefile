# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkergast <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 14:25:32 by rkergast          #+#    #+#              #
#    Updated: 2018/11/07 14:25:43 by rkergast         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
EXEC = exe
NAME = libft.a

SRCDIR = srcs/
HEADIR = includes/


SRC = $(SRCDIR)ft_putchar.c $(SRCDIR)ft_putstr.c $(SRCDIR)ft_strcmp.c \
	$(SRCDIR)ft_strlen.c $(SRCDIR)ft_swap.c

all: $(EXEC)

$(EXEC): lib

libft.a: 
	$(CC) -c $(FLAGS) $(SRC)

lib: libft.a
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean $(EXEC)

