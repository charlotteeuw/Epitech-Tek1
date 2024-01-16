/*
** EPITECH PROJECT, 2023
** %LONG3
** File description:
** -l in my_ls
*/

#include "../include/my_ls.h"

char **if_time(int j, char **file_names, int i, const char *dirname)
{
    char path[4096];
    char path2[4096];
    struct stat file_type;
    struct stat file_stat;
    char *temp;

    my_strcpy(path, dirname);
    my_strcpy(path2, dirname);
    my_strcat(path, "/");
    my_strcat(path2, "/");
    my_strcat(path, file_names[i]);
    my_strcat(path2, file_names[j]);
    lstat(path, &file_stat);
    lstat(path2, &file_type);
    if (file_type.st_mtime > file_stat.st_mtime) {
        temp = file_names[j];
        file_names[j] = file_names[i];
        file_names[i] = temp;
    }
    return file_names;
}

char **my_sort_time(char **file_names, int file_count, int *flags,
    const char *dirname)
{
    int MAX_SIZE = 4096;
    char path[MAX_SIZE];
    char path2[MAX_SIZE];
    struct stat file_type;
    struct stat file_stat;
    int i = 0;
    char *temp;

    for (i = 0; i < file_count - 1; i++) {
        for (int j = i + 1; j < file_count; j++)
            file_names = if_time(j, file_names, i, dirname);
    }
    return file_names;
}
