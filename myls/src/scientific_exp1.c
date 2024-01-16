/*
** EPITECH PROJECT, 2023
** Scientific expression
** File description:
** %e flag
*/

#include "../include/my.h"

int decimals(double decimal_part)
{
    int number;

    for (int i = 0 ; i < 6 ; i++) {
        decimal_part = decimal_part * 10;
        number = (int)decimal_part;
        my_putchar('0' + number);
        decimal_part = decimal_part - number;
        decimal_part += 0.0000001;
    }
    return (1);
}

int print_e(int count, int integer_part, double decimal_part)
{
    my_put_nbr(integer_part);
    my_putchar('.');
    print_dec(decimal_part);
    if (count > 9)
        my_putstr("e+");
    else
        my_putstr("e+0");
    my_put_nbr(count);
    return (1);
}

int scientific_exp1(double nb)
{
    int integer_part = (int) nb;
    double decimal_part = nb;
    int count = 0;

    if (my_isneg(integer_part) == 1) {
        my_putchar('-');
        integer_part *= -1;
        decimal_part *= -1;
    }
    while (integer_part / 10 > 0) {
        integer_part = integer_part / 10;
        count += 1;
    }
    decimal_part = (decimal_part / my_compute_power_rec(10, count)
        ) - integer_part;
    print_e(count, integer_part, decimal_part);
    return (1);
}
