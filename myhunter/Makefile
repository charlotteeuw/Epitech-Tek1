##
## EPITECH PROJECT, 2023
## $MAKEFILE
## File description:
## Makefile for my_hunter
##

INCLUDE	=	-I./include/

SRC	=	src/main.c	\
		src/game/in_game.c	\
		src/set_objects.c	\
		src/set_objects2.c	\
		src/game/game.c	\
		src/set_clocks.c	\
		src/calculate.c	\
		src/game/init.c	\
		src/information.c	\
		src/my_strlen.c	\
		src/my_putchar.c	\
		src/my_putstr.c	\

CFLAGS	+=	-g -W -Wall -Wextra

NAME	=	my_hunter

OBJ 	= 	$(SRC:.c=.o)

CSFML	=	-lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

all:	$(OBJ)
	gcc -o $(NAME) $(INCLUDE) $(SRC) $(CFLAGS) $(CSFML)

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
