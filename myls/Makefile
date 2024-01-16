##
## EPITECH PROJECT, 2023
## $MAKEFILE
## File description:
## Makefile for my_ls
##

INCLUDE	=	-I./include/

SRC	=	src/my_printf.c	\
		src/my_put_nbr.c 	\
		src/check_number.c	\
		src/float.c	\
		src/hexa_int1.c	\
		src/hexa_int2.c	\
		src/my_isnum.c	\
		src/my_putchar.c	\
		src/my_putstr.c	\
		src/plus_flag.c	\
		src/number_chars.c	\
		src/pointer_flag.c	\
		src/my_isneg.c	\
		src/my_put_unsigned.c	\
		src/my_strlen.c	\
		src/binary_int.c	\
		src/scientific_exp1.c	\
		src/scientific_exp2.c	\
		src/hashtag.c	\
		src/minus_flag.c	\
		src/my_compute_power_rec.c \
		src/specifier1.c	\
		src/unsigned_int.c	\
		src/zero_flag.c	\
		src/space_flag.c	\
		src/flag.c	\
		ls/my_ls.c	\
		ls/my_ls2.c	\
		src/my_sort_word_array.c	\
		src/my_strcmp.c	\
		ls/long_flag.c	\
		ls/long2.c	\
		ls/long3.c	\
		src/my_strcpy.c	\
		src/my_strcat.c	\
		ls/time.c	\
		ls/recursive.c	\
		bonus/bonus_u.c	\
		ls/main.c	\
		bonus/bonus_bigf.c	\
		src/my_strlowcase.c	\
		ls/sort_ls.c	\
		ls/chardev.c	\
		src/my_strncmp.c	\

OBJ 	= 	$(SRC:.c=.o)

NAME	=	my_ls

all:	$(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(INCLUDE)

clean:
	rm -f $(OBJ)
	rm -f *.out
	rm -f *.log
	rm -f *.gcda
	rm -rf *.gcno

fclean:	clean
	rm -f $(NAME)

re:	fclean all

