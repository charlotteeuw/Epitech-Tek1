/*
** EPITECH PROJECT, 2023
** $MY_STRCAT
** File description:
** Concatenates 2 strings
*/

#include <unistd.h>
#include <stdio.h>
#include "../include/my.h"

int my_strlen_one(char const *str)
{
    int counter = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        counter++;
    }
    return counter;
}

char *my_strcat(char *dest, char const *src)
{
    int len1 = my_strlen_one(dest);
    int len2 = my_strlen_one(src);

    for (int i = 0; i <= len2; i++) {
        dest[len1+ i] = src[i];
    }
    return dest;
}
