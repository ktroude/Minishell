# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ktroude <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/18 16:56:02 by ktroude           #+#    #+#              #
#    Updated: 2021/11/03 14:35:49 by ktroude          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_itoa.c \
		ft_strlen.c \
		ft_putstr_fd.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_split.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_memcmp.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_strdup.c \
		ft_strtrim.c \
		ft_isalnum.c \
		ft_memmove.c \
		ft_strjoin.c \
		ft_substr.c \
		ft_isalpha.c \
		ft_memset.c \
		ft_strlcat.c \
		ft_tolower.c \
		ft_isascii.c \
		ft_putchar_fd.c \
		ft_strlcpy.c \
		ft_toupper.c \
		ft_isdigit.c \
		ft_putendl_fd.c \
		ft_isprint.c \
		ft_putnbr_fd.c \
		ft_strmapi.c \
		ft_calloc.c \
		ft_split.c \
		ft_striteri.c

SRCSB = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c
	
CC = gcc

OBJ = $(SRCS:.c=.o)

OBJB = $(SRCSB:.c=.o)

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

REMAKE = @make --no-print-directory

ifdef WITH_BONUS
	OBJ = $(SRCS:.c=.o) $(SRCSB:.c=.o)
endif

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean :
	$(RM) $(OBJ)

fclean : clean
		$(RM) $(NAME) $(OBJB)

re : fclean all

bonus : 
	$(REMAKE) WITH_BONUS=1 all

.PHONY: all clean fclean re bonus
