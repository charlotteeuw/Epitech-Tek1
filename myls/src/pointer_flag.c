/*
** EPITECH PROJECT, 2023
** $POINTER_FLAG
** File description:
** %p flag
*/

#include "../include/my.h"

int pointer_flag(void *nb)
{
    unsigned long address = (unsigned long)nb;
    char buffer[18];
    int i = 0;

    while (i < 16) {
        buffer[i] = "0123456789abcdef"[(address >> ((15 - i) * 4)) & 0xF];
        i++;
    }
    buffer[16] = '\0';
    my_putstr("0x");
    for (int j = 4; buffer[j] != '\0'; j++) {
        my_putchar(buffer[j]);
    }
    return (1);
}
