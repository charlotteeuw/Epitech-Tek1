/*
** EPITECH PROJECT, 2023
** $ALGORITHM
** File description:
** Algorithm for setting up
*/

#include "../include/setting.h"

int nb_lines(char *buffer)
{
    int lines = 0;
    int i = 0;

    while (buffer[i] != '\0' && buffer[i] != '\n') {
        if (buffer[i] < '0' || buffer[i] > '9')
            return 84;
        lines = lines * 10 + buffer[i] - '0';
        i++;
    }
    if (lines < 1 || buffer[i] != '\n')
        return 84;
    return lines;
}

void print_newmap(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
}

int in_algo(int *square_size, struct Map *map1, int i, int j)
{
    square_t *square = malloc(sizeof(square_t));

    square->map = map1->tab;
    square->row = i;
    square->col = j;
    if ((j + *square_size <= map1->nb_column) &&
    (i + *square_size <= map1->nb_ligne)) {
        if (is_square_of_size(square, *square_size) == 1) {
            map1->max_i = i;
            map1->max_j = j;
            (*square_size)++;
            return 1;
        }
    }
    return 0;
}

void in_algo2(int square_size, char **tab, struct Map *map1)
{
    for (int col = 0; col < square_size; col++) {
        for (int chara = 0; chara < square_size; chara++)
            tab[map1->max_i + col][map1->max_j + chara] = 'x';
    }
}

int go_through_map(int nb_ligne, int nb_column, char **tab, struct Map *map1)
{
    int i = 0;
    int j = 0;
    int square_size = 1;

    while (i < nb_ligne) {
        if (in_algo(&square_size, map1, i, j) == 0)
            j++;
        if (j == nb_column) {
            j = 0;
            i++;
        }
    }
    return square_size;
}
