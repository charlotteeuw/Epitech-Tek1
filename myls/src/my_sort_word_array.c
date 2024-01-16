/*
** EPITECH PROJECT, 2023
** $MY_SORT_WORD_ARRAY
** File description:
** Sorts words in an array with ascii
*/

#include <stdio.h>
#include "../include/my.h"

void sort_word(char **tab, int *j, int i, int *mini)
{
    while (tab[*j] != NULL) {
        if (my_strcmp(tab[*j], tab[i]) < 0)
            *mini = *j;
        (*j)++;
    }
}

void my_sort_word_array(char **tab)
{
    int i = 0;
    int j = 0;
    int mini = 0;
    char *temp;

    while (tab[i] != NULL) {
        j = i + 1;
        mini = i;
        sort_word(tab, &j, i, &mini);
        if (mini != i) {
            temp = tab[i];
            tab[i] = tab[mini];
            tab[mini] = temp;
        }
        i++;
    }
}
