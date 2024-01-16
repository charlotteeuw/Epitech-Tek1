/*
** EPITECH PROJECT, 2023
** $MY_LS
** File description:
** Recoding ls command
*/

#include "../include/my_ls.h"

int count_files(const char *dirname)
{
    DIR *dirp = opendir(dirname);
    struct dirent *entity;
    int file_count = 0;

    if (dirp == NULL) {
        perror("opendir");
        exit(84);
    }
    for (entity = readdir(dirp); entity != NULL; entity = readdir(dirp))
        file_count++;
    closedir(dirp);
    return file_count;
}

int list_files(const char *dirname, int *flags)
{
    DIR *dirp = opendir(dirname);
    struct dirent *entity;
    int file_count = count_files(dirname);
    char **file_names = malloc(sizeof(char *) * (file_count + 1));

    if (dirp == NULL) {
        perror("opendir");
        exit(84);
    }
    file_count = 0;
    for (entity = readdir(dirp); entity != NULL; entity = readdir(dirp)) {
        file_names[file_count] = entity->d_name;
        file_count++;
    }
    file_names[file_count] = NULL;
    if (flags[7] == 0)
        my_sort_ls(file_names, file_count, flags);
    check_flag(flags, file_names, &file_count, dirname);
    closedir(dirp);
}

void check_flag(int *flags, char **file_names, int *file_count,
    const char *dirname)
{
    if (flags[4] == 1)
        file_names = my_sort_time(file_names, *file_count, flags, dirname);
    if (flags[1] == 1)
        reverse_files(file_names, *file_count);
    if (flags[2] == 1)
        long_format(file_names, file_count, flags, dirname);
    else
        in_checkflag(flags, file_names, file_count, dirname);
}

void in_checkflag(int *flags, char **file_names, int *file_count,
    const char *dirname)
{
    if (flags[6] == 1) {
        my_sort_time_u(file_names, *file_count, flags);
        return;
    }
    if (flags[0] == 1) {
        hidden_files(file_names, file_count);
        return;
    }
    if (flags[8] == 1)
        bonus_bigf(file_names, file_count, flags);
    else if (flags[5] == 1)
        recursive_flag(dirname);
    else
        help_checkflag(file_count, file_names, flags);
}
