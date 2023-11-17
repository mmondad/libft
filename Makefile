# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmondad <mmondad@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 15:34:13 by mmondad           #+#    #+#              #
#    Updated: 2023/11/17 16:21:19 by mmondad          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_split.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
NAME = libft.a
B_SRS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c \
	ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c \
	ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
B_OBJECTS = $(B_SRS:.c=.o)
OBJECTS = $(SRS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

all:$(NAME)
$(NAME):$(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
clean:
	rm -f $(OBJECTS) $(B_OBJECTS)
fclean:clean
	rm -f $(NAME)
re:fclean all
bonus:$(NAME)
	$(CC) $(CFLAGS) -c $(B_SRS)
	ar rcs $(NAME) $(B_OBJECTS)