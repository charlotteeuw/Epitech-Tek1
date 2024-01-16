/*
** EPITECH PROJECT, 2023
** $MY_PUT_SHORT
** File description:
** for h length modifier
*/

#include "../include/my.h"

void my_put_short(short int number)
{
    char str[10];
    int i = 0;

    if (number == 0) {
        my_putchar('0');
        return;
    }
    if (my_isneg(number) == 1) {
        my_putchar('-');
        number = -number;
    }
    while (number > 0) {
        str[i] = '0' + (number % 10);
        number = number / 10;
        i++;
    }
    while (i > 0) {
        i--;
        my_putchar(str[i]);
    }
}
