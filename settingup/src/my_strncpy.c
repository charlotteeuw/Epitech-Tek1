/*
** EPITECH PROJECT, 2023
** $MY_STRNCPY
** File description:
** Copies n times a string into another
*/

#include <stdio.h>
#include <unistd.h>

char *my_strncpy(char *dest, char const *src, int n)
{
    int counter = 0;
    int i = 0;

    for (i; counter != n; i++) {
        dest[i] = src[i];
        counter++;
    }
    if (n > my_strlen(dest)) {
        dest[i] = '\0';
    }
    return dest;
}
