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
COMP = clang
CFLAGS = -Wall -Werror -Wextra

SRC = ft_strlen.c\
	ft_atoi.c\
	ft_split.c\
	ft_strdup.c\
	ft_strjoin.c\
	ft_strlcat.c\
	ft_strlcpy.c\
	ft_strncmp.c\
	ft_isalpha.c\
	ft_isdigit.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_bzero.c\
	ft_calloc.c\
	ft_isprint.c\
	ft_itoa.c\
	ft_putchar_fd.c\
	ft_putnbr_fd.c\
	ft_putstr_fd.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_putendl_fd.c\
	ft_striteri.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_strmapi.c\
	ft_substr.c\
	ft_memset.c\
	ft_strnstr.c\
	ft_memcmp.c\
	ft_memchr.c\
	ft_memcpy.c\
	ft_strtrim.c\
	ft_memmove.c\
	ft_lstadd_back.c\
	ft_lstadd_front.c\
	ft_lstlast.c\
	ft_lstnew.c\
	ft_lstsize.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

%.o : %.c
	$(COMP) $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJ)
	ar -rcs $(NAME) $(OBJ)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)
	rm -f libft.so

re : fclean all

.PHONY: all fclean clean re
