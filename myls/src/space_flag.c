/*
** EPITECH PROJECT, 2023
** $SPACE_FLAG
** File description:
** Space flag for printf
*/

#include "../include/my.h"

int space_flag(int number)
{
    if (my_isneg(number) == 0)
        my_putchar(' ');
    return (1);
}
