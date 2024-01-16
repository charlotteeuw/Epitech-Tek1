/*
** EPITECH PROJECT, 2023
** $GENERATION
** File description:
** Generates a map
*/

#include "../include/setting.h"

int convert_number(char *buffer)
{
    int number = 0;
    int i = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] < '0' || buffer[i] > '9')
            exit(84);
        number = number * 10 + buffer[i] - '0';
        i++;
    }
    if (number < 1)
        exit(84);
    return number;
}

void if_gen(int *k, int length)
{
    if (*k == length)
        *k = 0;
}

char **generation(int nb, char *pattern)
{
    char **tab = malloc(sizeof(char *) * (nb + 1));
    int i = 0;
    int j = 0;
    int k = 0;
    int length = my_strlen(pattern);

    in_main(nb);
    for (i; i < nb; i++) {
        j = 0;
        tab[i] = malloc(sizeof(char) * (nb + 1));
        for (j; j < nb; j++) {
            if_gen(&k, length);
            tab[i][j] = pattern[k];
            k++;
        }
        tab[i][j] = '\0';
    }
    tab[i] = NULL;
    return tab;
}
