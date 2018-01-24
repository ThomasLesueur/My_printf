##
## EPITECH PROJECT, 2017
## my_printf
## File description:
## Makefile for my_printf
##

SRC	=	my_printf2.c		\
		my_putchar.c		\
		my_putstr.c		\
		my_put_nbr.c		\
		flags01.c		\
		flags02.c		\
		convert.c

UT_DIR	=	tests

UT_SRC	=	$(UT_DIR)/Test_printf.c

OBJ	=	$(SRC:.c=.o) $(UT_SRC:.c=.o)

NAME	=	libmy.a

UT_NAME =	test

CFLAGS	=	-w -Wall -Wextra --coverage

LDFLAGS	=	-lcriterion -lgcov

all:		$(OBJ)
		ar rc -o $(NAME) $(OBJ)

tests_run:	$(OBJ)
		gcc -o $(UT_NAME) $(OBJ) $(LDFLAGS)
		./test

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
