/*
** EPITECH PROJECT, 2023
** $FLOAT
** File description:
** %f flag
*/

#include "../include/my.h"

int print_dec(double decimal_part)
{
    int number;

    for (int i = 0; i < 6; i++) {
        decimal_part = decimal_part * 10;
        number = (int)decimal_part;
        my_putchar('0' + number);
        decimal_part = decimal_part - number;
        decimal_part += 0.0000005;
    }
    return (1);
}

int float_flag(double nb)
{
    int integer_part = (int) nb;
    double decimal_part = nb;

    if (my_isneg(integer_part) == 1) {
        my_putchar('-');
        nb *= -1;
    }
    decimal_part = nb - integer_part;
    my_put_nbr(integer_part);
    my_putchar('.');
    print_dec(decimal_part);
    return (1);
}
