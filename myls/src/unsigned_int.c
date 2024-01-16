/*
** EPITECH PROJECT, 2023
** $UNSIGNED_INT
** File description:
** %u flag
*/

#include "../include/my.h"

int unsigned_int(int nb)
{
    unsigned int changer = 0;

    if (my_isneg(nb) == 1) {
        changer = changer + nb;
        my_put_unsigned(changer);
    } else
        my_put_nbr(nb);
    return (1);
}
