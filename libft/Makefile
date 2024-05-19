# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ychbily <ychbily@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/18 18:30:17 by ychbily           #+#    #+#              #
#    Updated: 2023/11/22 04:38:18 by ychbily          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra


SRCS = ft_isalnum.c	ft_memchr.c	ft_memset.c	ft_strlen.c	ft_tolower.c \
	ft_atoi.c	ft_isalpha.c	ft_memcmp.c	ft_strchr.c	ft_strncmp.c	ft_toupper.c \
	ft_bzero.c	ft_isascii.c	ft_memcpy.c	ft_strlcat.c	ft_strnstr.c \
	ft_isdigit.c	ft_isprint.c	ft_memmove.c	ft_strlcpy.c	ft_strrchr.c \
	ft_strdup.c	ft_calloc.c	ft_substr.c	ft_strjoin.c ft_strtrim.c	ft_split.c \
	ft_itoa.c	ft_striteri.c	ft_strmapi.c	ft_putchar_fd.c	ft_putstr_fd.c \
	ft_putendl_fd.c	ft_putnbr_fd.c	
BSRC = ft_lstnew_bonus.c	ft_lstadd_front_bonus.c	ft_lstsize_bonus.c	ft_lstlast_bonus.c	ft_lstadd_back_bonus.c\
	ft_lstdelone_bonus.c	ft_lstclear_bonus.c	ft_lstiter_bonus.c	ft_lstmap_bonus.c

OBJS = $(SRCS:.c=.o)
BOBJ = $(BSRC:.c=.o)
NAME = libft.a


.PHONY:all bonus clean fclean re


all: $(NAME)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c  $< -o $@
	
clean:
	rm -f $(OBJS) $(BOBJ)
	
fclean : clean
	rm -rf $(NAME)	

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)

re: fclean all

bonus: $(BOBJ) $(OBJS)
	ar -rc $(NAME) $(BOBJ) $(OBJS)
	

