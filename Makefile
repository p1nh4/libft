NAME := libft.a
CC := cc
C_FLAGS := -Wall -Wextra -Werror 
AR := ar 
AR_FLAGS := -rcs
INCLUDES := libft.h
SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)
RM := rm -f

all : $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(AR_FLAGS) $@ $^

%.o : %.c $(INCLUDE)
	$(CC) $(C_FLAGS) -c -o $@ $<

clean : 
	$(RM) $(OBJ)

fclean : clean 
	$(RM) $(NAME)

re : fclean all 

.PHONY: all clean fclean re 
