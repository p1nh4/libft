# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: davidos- <davidos-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/15 22:09:24 by davidos-          #+#    #+#              #
#    Updated: 2025/10/15 22:24:58 by davidos-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
CC := cc
C_FLAGS := -Wall -Wextra -Werror -I. -I./testes
AR := ar
AR_FLAGS := -rcs
INCLUDES := libft.h
SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)
RM := rm -f

# --- Biblioteca padrão ---
all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(AR_FLAGS) $@ $^

%.o : %.c $(INCLUDES)
	$(CC) $(C_FLAGS) -c -o $@ $<

clean :
	$(RM) $(OBJ) $(TEST_OBJ)

fclean : clean
	$(RM) $(NAME) $(TEST_EXE)

re : fclean all

# --- Seção de testes ---
TEST_SRC := $(wildcard testes/*.c) main/main.c
TEST_OBJ := $(TEST_SRC:.c=.o)
TEST_EXE := a.out

test: $(NAME) $(TEST_OBJ)
	$(CC) $(C_FLAGS) -o $(TEST_EXE) $(TEST_OBJ) -L. -lft

clean_test:
	$(RM) $(TEST_OBJ) $(TEST_EXE)

.PHONY: all clean fclean re test clean_test

