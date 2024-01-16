/*
** EPITECH PROJECT, 2023
** $HASHTAG
** File description:
** # flag for printf
*/

#include "../include/my.h"

int hashtag(const char *str, int i)
{
    if (str[i + 1] == 'o')
        my_putchar('0');
    if (str[i + 1] == 'x')
        my_putstr("0x");
    if (str[i + 1] == 'X')
        my_putstr("0X");
    return (1);
}
