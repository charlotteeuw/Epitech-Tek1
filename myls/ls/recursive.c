/*
** EPITECH PROJECT, 2023
** $RECURSIVE
** File description:
** Recursive flag
*/

#include "../include/my_ls.h"

void recursive_flag(const char *dirname)
{
    DIR *dirp = opendir(dirname);
    struct dirent *entity;
    struct stat file_type;
    int MAX_SIZE = 4096;
    char path[MAX_SIZE];

    my_printf("%s:\n", dirname);
    for (entity = readdir(dirp); entity != NULL; entity = readdir(dirp)) {
        if (entity->d_name[0] != '.')
            my_printf("%s\n", entity->d_name);
        my_strcpy(path, dirname);
        my_strcat(path, "/");
        my_strcat(path, entity->d_name);
        stat(path, &file_type);
        if (S_ISDIR(file_type.st_mode) && entity->d_name[0] != '.')
            recursive_flag(path);
    }
    closedir(dirp);
}
