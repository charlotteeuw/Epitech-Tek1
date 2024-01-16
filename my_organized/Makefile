##
## EPITECH PROJECT, 2023
## $MAKEFILE
## File description:
## Makefile for sokoban
##

INCLUDE	=	-I./include/

SRC	=	src/main.c	\
		src/linked_lists.c	\
		src/sort.c	\
		src/my_putstr.c	\
		src/my_put_nbr.c	\
		src/my_putchar.c	\
		src/output.c	\
		src/my_strlen.c	\
		src/my_strdup.c	\
		src/my_getnbr.c	\
		src/delete.c	\
		src/algorithm_sort.c	\
		src/swap.c	\
		src/my_strcmp.c	\
		src/check_greater.c	\
		src/check_less.c	\
		src/sort_r.c	\
		src/my_str_isnum.c	\

CFLAGS	+=	-g -W

OBJ 	= 	$(SRC:.c=.o)

NAME	=	organized

all:	$(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(INCLUDE) -L./include/ -lshell

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
