# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkimdil <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 18:03:07 by mkimdil           #+#    #+#              #
#    Updated: 2023/11/09 18:03:11 by mkimdil          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = my_bzero.c my_isalpha.c my_isascii.c my_isdigit.c \
	my_isprint.c my_memcpy.c my_memmove.c my_memset.c my_strlen.c \
	my_toupper.c my_tolower.c my_strchr.c my_strrchr.c my_strncmp.c \
	my_memchr.c my_memcmp.c my_atoi.c my_isalnum.c my_strdup.c \
	my_calloc.c my_strnstr.c my_strlcpy.c my_strlcat.c my_strjoin.c \
	my_split.c my_substr.c my_strtrim.c my_itoa.c my_strmapi.c \
	my_striteri.c my_putchar_fd.c my_putstr_fd.c my_putendl_fd.c \
	my_putnbr_fd.c my_lstnew.c my_lstadd_front.c my_lstsize.c \
	my_lstlast.c my_lstadd_back.c my_lstdelone.c my_lstclear.c \
	my_lstiter.c my_lstmap.c my_free.c

HEADER = mylibrary.h
CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = mylibrary.a
OBJDIR = obj
OBJS = $(addprefix $(OBJDIR)/, $(SRC:.c=.o))


all: $(NAME)

test: $(NAME) test_main.c
	$(CC) $(FLAGS) -o test_mylibrary test_main.c -L. -lmylibrary
	./test_mylibrary

$(NAME): $(OBJDIR) $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJDIR):
	mkdir -p $(OBJDIR)



$(OBJDIR)/%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re test
