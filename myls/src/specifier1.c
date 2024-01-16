/*
** EPITECH PROJECT, 2023
** $SPECIFIER1
** File description:
** FUnction for specifiers
*/

#include "../include/my.h"

void specifier1(const char flag, int input)
{
    if (flag == '%')
        my_putchar('%');
    if (flag == 'c')
        my_putchar(input);
    if (flag == 'd' || flag == 'i')
        my_put_nbr(input);
    if (flag == 's')
        my_putstr((char *)input);
}
