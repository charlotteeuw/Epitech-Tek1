/*
** EPITECH PROJECT, 2023
** my_put_unsigned
** File description:
** ...
*/

#include "../include/my.h"

unsigned int my_put_unsigned(unsigned int nb)
{
    unsigned int i = 0;

    if (nb >= 0 && nb < 10)
        my_putchar(48 + nb);
    if (nb > 9) {
        my_put_unsigned(nb / 10);
        i = (nb % 10);
        my_putchar(48 + i);
    }
    return (nb);
}
