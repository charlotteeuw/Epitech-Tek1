/*
** EPITECH PROJECT, 2023
** Scientific expression
** File description:
** %e flag
*/

#include "../include/my.h"

int scientific_exp2(double nb)
{
    int integer_part = (int) nb;
    double decimal_part = (double) nb;
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
    decimal_part = (decimal_part / my_compute_power_rec(10, count))
        - integer_part;
    print_e(count, integer_part, decimal_part);
    return (1);
}
