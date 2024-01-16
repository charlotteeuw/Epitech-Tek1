##
## EPITECH PROJECT, 2023
## $MAKEFILE
## File description:
## Makefile for settingup
##

INCLUDE	=	-I./include/

SRC	=	src/setting_up.c	\
		src/main.c	\
		src/generation.c	\
		src/algorithm.c	\
		src/algorithm2.c	\
		src/algorithm3.c	\
		src/my_strlen.c	\
		src/my_putstr.c	\
		src/my_putchar.c	\
		src/my_str_isnum.c	\

OBJ 	= 	$(SRC:.c=.o)

NAME	=	setting_up

all:	$(NAME)

$(NAME): $(OBJ)
	gcc -g -o $(NAME) $(OBJ) $(INCLUDE)

clean:
	rm -f $(OBJ)
	rm -f *.out
	rm -f *.log
	rm -f *.gcda
	rm -rf *.gcno
	rm -f vgcore*

fclean:	clean
	rm -f $(NAME)

re:	fclean all
