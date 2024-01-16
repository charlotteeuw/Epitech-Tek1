/*
** EPITECH PROJECT, 2023
** $ALGORITHM3
** File description:
** Algorithm for setting up
*/

#include "../include/setting.h"

int is_square_of_size(square_t *square, int square_size)
{
    int i = 0;
    int j = 0;

    while (i < square_size) {
        if (square->map[square->row + i][square->col + j] != '.')
            return 0;
        j++;
        if (j == square_size) {
            j = 0;
            i++;
        }
    }
    return 1;
}

void algorithm(char **tab, int nb_ligne, int nb_column)
{
    int square_size = 0;
    struct Map *map1 = malloc(sizeof(struct Map));

    map1->tab = tab;
    map1->nb_column = nb_column;
    map1->nb_ligne = nb_ligne;
    map1->max_i = 0;
    map1->max_j = 0;
    if (tab == NULL)
        return 84;
    square_size = go_through_map(nb_ligne, nb_column, tab, map1);
    square_size--;
    in_algo2(square_size, tab, map1);
    print_newmap(tab);
}
