/*
** EPITECH PROJECT, 2023
** $HEXA_INT
** File description:
** Function for %x
*/

#include "../include/my.h"

char check_hexa1(int nb)
{
    if (nb >= 10 && nb <= 15) {
        return 'A' + (nb - 10);
    } else {
        return '0' + nb;
    }
}

int hexa_int1(int nb)
{
    char temp[100];
    int i = 0;

    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
            }
    while (nb > 0) {
        temp[i] = check_hexa1(nb % 16);
        nb = nb / 16;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_putchar(temp[j]);
    }
    return (1);
}
