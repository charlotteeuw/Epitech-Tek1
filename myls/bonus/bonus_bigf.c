/*
** EPITECH PROJECT, 2023
** %LONG_FLAG
** File description:
** -l in my_ls
*/

#include "../include/my_ls.h"

void bonus_bigf(char **file_names, int *file_count, int *flags)
{
    struct stat file_type;

    for (int i = 0; i < *file_count ; i++) {
        if (flags[0] == 1 || file_names[i][0] != '.') {
            lstat(file_names[i], &file_type);
            if (S_ISDIR(file_type.st_mode)) {
                my_printf("%s/ \n", file_names[i]);
            } else if (S_ISLNK(file_type.st_mode)) {
                my_printf("%s@ \n", file_names[i]);
            } else if (S_ISREG(file_type.st_mode) && (file_type.st_mode & S_IXUSR)) {
                my_printf("%s* \n", file_names[i]);
            } else {
                my_printf("%s\n", file_names[i]);
            }
        }
    }
}
