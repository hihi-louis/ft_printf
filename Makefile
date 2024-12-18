NAME := libftprintf.a

CC := cc
CFLAGS := -Wall -Wextra -Werror

SRC_DIR	:= src
SRCS := ft_printf.c	\
		ft_putchar.c	\
		ft_puthex.c	\
		ft_putnbr.c	\
		ft_putpointer.c	\
		ft_putstr.c	\
		ft_putui.c

OBJ := $(SRCS:.c=.o)

all: $(NAME)

$(NAME):	$(OBJ)
	ar	rcs	$(NAME)	$(OBJ)

%.o:	$(SRC_DIR)/%.c
	$(CC) $(CFLAGS)	-c	$<	-o	$@

clean:
	rm	-f	$(OBJ)

fclean: clean
	rm	-f	$(NAME)

re:	fclean	all

.PHONY:	all	clean	fclean	re
	
