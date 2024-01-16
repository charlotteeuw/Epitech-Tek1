/*
** EPITECH PROJECT, 2023
** %LONG3
** File description:
** -l in my_ls
*/

#include "../include/my_ls.h"

void print_time_u(int file_count, char **file_names, int *flags)
{
    for (int i = 0; i < file_count; i++) {
        if (flags[0] == 1 || file_names[i][0] != '.') {
            my_printf("%s ", file_names[i]);
            my_putchar('\n');
        }
    }
}

void for_time_u(int i, int file_count, char **file_names, int *flags)
{
    struct stat file_type;
    struct stat file_stat;
    char *temp;

    for (int j = i + 1; j < file_count; j++) {
        lstat(file_names[i], &file_stat);
        lstat(file_names[j], &file_type);
        if (file_type.st_atime > file_stat.st_atime) {
            temp = file_names[j];
            file_names[j] = file_names[i];
            file_names[i] = temp;
        }
    }
}

void my_sort_time_u(char **file_names, int file_count, int *flags)
{
    for (int i = 0; i < file_count - 1; i++)
        for_time_u(i, file_count, file_names, flags);
    print_time_u(file_count, file_names, flags);
}
