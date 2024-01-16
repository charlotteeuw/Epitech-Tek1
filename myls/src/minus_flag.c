/*
** EPITECH PROJECT, 2023
** $MINUS_FLAG
** File description:
** - flag for printf
*/

#include "../include/my.h"

int length_number(int number)
{
    int length = 0;

    if (number == 0) {
        length = 1;
    } else {
        while (number != 0) {
            length++;
            number = number / 10;
        }
    }
    return length;
}

int minus_flag(const char *format, int i, int input)
{
    int j = i - 1;
    int number = 0;
    int input_length;
    char specifier;

    number += format[j] - '0';
    j++;
    while (is_num(format[j]) == 1) {
        number *= 10;
        number += format[j] - '0';
        j++;
    }
    input_length = length_number(input);
    for (int k = 0; k < (number - input_length); k++) {
        my_putchar(' ');
    }
    return (1);
}
