#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msarapii <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/31 12:37:49 by msarapii          #+#    #+#              #
#    Updated: 2017/11/17 10:10:40 by msarapii         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=libft.a
SRCS=ft_memchr.c ft_toupper.c ft_atoi.c ft_strcat.c ft_strncat.c ft_strcpy.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isprint.c ft_memccpy.c ft_memcmp.c ft_memmove.c ft_memset.c ft_strchr.c ft_strcmp.c ft_strdup.c ft_strlcat.c ft_strlen.c ft_strncmp.c ft_strncpy.c ft_memalloc.c ft_strstr.c ft_tolower.c ft_strrchr.c ft_isdigit.c ft_isascii.c ft_memcpy.c ft_strnstr.c ft_strnew.c ft_memdel.c ft_putchar.c ft_putstr.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c
OBJ=ft_memchr.o ft_toupper.o ft_atoi.o	ft_strcat.o ft_strncat.o ft_strcpy.o ft_bzero.o	ft_isalnum.o ft_isalpha.o ft_isprint.o ft_memccpy.o ft_memcmp.o ft_memmove.o ft_memset.o ft_strchr.o ft_strcmp.o ft_strdup.o ft_strlcat.o ft_strlen.o ft_strncmp.o ft_strncpy.o ft_memalloc.o ft_strstr.o ft_tolower.o ft_strrchr.o	ft_isdigit.o ft_isascii.o ft_memcpy.o ft_strnstr.o ft_strnew.o ft_memdel.o ft_putchar.o ft_putstr.o ft_strdel.o ft_strclr.o ft_striter.o ft_striteri.o ft_strmap.o ft_strmapi.o ft_strequ.o ft_strnequ.o ft_strsub.o ft_strjoin.o ft_strtrim.o ft_strsplit.o
HEADERS=./libft.h

all: $(NAME)

$(NAME):
			$(CC) $(CFLAGS) -c $(SRCS) -I $(HEADERS)
			ar rc $(NAME) $(OBJ)
			ranlib $(NAME)

clean:
	rm -rf *.o

fclean: 
	rm -rf $(NAME) *.o

re: fclean all
