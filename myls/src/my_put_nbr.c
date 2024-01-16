/*
** EPITECH PROJECT, 2023
** my_put_nbr
** File description:
** Print the value as the string give
*/

#include "../include/my.h"

int horror_moovie(void)
{
    my_putchar(45);
    my_putchar(50);
    my_putchar(49);
    my_putchar(52);
    my_putchar(55);
    my_putchar(52);
    my_putchar(56);
    my_putchar(51);
    my_putchar(54);
    my_putchar(52);
    my_putchar(56);
    return (0);
}

int my_put_nbr(int nb)
{
    int i = 0;

    if (nb == -2147483648)
        horror_moovie();
    if (nb < 0 && nb != -2147483648) {
            my_putchar(45);
            my_put_nbr(nb * (-1));
        }
    if (nb < 10 && nb >= 0)
        my_putchar(48 + nb);
    if (nb > 9) {
        my_put_nbr(nb / 10);
        i = (nb % 10);
        my_putchar(48 + i);
    }
    return (0);
}
