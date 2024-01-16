/*
** EPITECH PROJECT, 2023
** $ZERO_FLAG
** File description:
** Zero flag (zero-padding)
*/

#include "../include/my.h"

int length(int number)
{
    int len = 0;

    if (number == 0) {
        len = 1;
    } else {
        while (number != 0) {
            len++;
            number = number / 10;
        }
    }
    return len;
}

int zero_flag(int input, int number)
{
    int len = number - length(input);

    for (int i = 0; i < len; i++)
        my_putchar('0');
    return (1);
}
