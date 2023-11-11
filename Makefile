# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 15:34:13 by mmondad           #+#    #+#              #
#    Updated: 2023/11/11 18:10:47 by mmondad          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_strdup.c ft_split.c ft_strtrim.c
NAME = libft.a
OBJECTS = $(SRS:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all:$(NAME)
$(NAME):$(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
clean:
	rm -f *.o
fclean:clean
	rm -f $(NAME)
re:fclean all
