# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mes-sadk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/19 12:11:35 by mes-sadk          #+#    #+#              #
#    Updated: 2021/12/22 05:23:44 by mes-sadk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
cc = gcc
CFLAGS = -Wall -Wextra -Werror

OBJ = libft/ft_memchr.o \
	  libft/ft_putnbr.o \
	  libft/ft_puthexa.o \
	  libft/ft_putstr.o \
	  libft/ft_putchar.o \
	  ft_printf.o

all: $(NAME)

$(NAME): $(OBJ) ft_printf.h libft/libft.h
	@ar -r $(NAME) $(OBJ)

bonus: re

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
