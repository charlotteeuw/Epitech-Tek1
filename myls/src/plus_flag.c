/*
** EPITECH PROJECT, 2023
** $PLUS_FLAG
** File description:
** + flag for printf
*/

#include "../include/my.h"

int plus_flag(int input)
{
    if (my_isneg(input) == 0)
        my_putchar('+');
    return (1);
}
