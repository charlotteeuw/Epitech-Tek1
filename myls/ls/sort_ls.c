/*
** EPITECH PROJECT, 2023
** %SORT_LS
** File description:
** Sorting ls
*/

#include "../include/my_ls.h"

void in_ls(int file_count, char **file_names, int i, char *temp)
{
    for (int j = i + 1; j < file_count; j++) {
        if (my_strcmp(my_strlowcase(file_names[j]),
    my_strlowcase(file_names[i])) < 0) {
            temp = file_names[j];
            file_names[j] = file_names[i];
            file_names[i] = temp;
        }
    }
}

char **my_sort_ls(char **file_names, int file_count, int *flags)
{
    char *temp;

    for (int i = 0; i < file_count - 1; i++) {
        in_ls(file_count, file_names, i, temp);
    }
    return file_names;
}
