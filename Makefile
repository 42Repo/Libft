# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asuc <asuc@student.42angouleme.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/12 17:42:16 by asuc              #+#    #+#              #
#    Updated: 2023/08/12 17:42:16 by asuc             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
COMP = gcc
CFLAGS = -Wall -Werror -Wextra

SRC = srcs/ft_strlen.c\
	srcs/ft_atoi.c\
	srcs/ft_split.c\
	srcs/ft_strdup.c\
	srcs/ft_strjoin.c\
	srcs/ft_strlcat.c\
	srcs/ft_strlcpy.c\
	srcs/ft_strncmp.c
HEADER = includes/

OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c
	$(COMP) -I$(HEADER) $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all fclean clean re
