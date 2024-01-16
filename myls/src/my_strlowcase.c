/*
** EPITECH PROJECT, 2023
** $MY_STRLOWCASE
** File description:
** Converts the characters in lowercase chars
*/

#include <stdio.h>
#include <unistd.h>
#include "../include/my.h"

int char_ismaj(char *str, int i)
{
    if (str[i] >= 'A' && str[i] <= 'Z')
        return 1;
    return 0;
}

char *my_strlowcase(char *str)
{
    int i = 0;
    char *temp = malloc(sizeof(char) * (my_strlen(str) + 1));

    for (i; str[i] != '\0'; i++) {
        if (char_ismaj(str, i) == 1)
            temp[i] = str[i] + 32;
        else
            temp[i] = str[i];
    }
    return temp;
}
