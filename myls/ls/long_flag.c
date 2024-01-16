/*
** EPITECH PROJECT, 2023
** %LONG_FLAG
** File description:
** -l in my_ls
*/

#include "../include/my_ls.h"
#include <limits.h>

int switch_long(struct stat *file_type)
{
    switch (file_type->st_mode & __S_IFMT) {
    case __S_IFDIR:
        return my_printf("d");
    case __S_IFBLK:
        return my_printf("b");
    case __S_IFCHR:
        return my_printf("c");
    case __S_IFIFO:
        return my_printf("p");
    case __S_IFLNK:
        return my_printf("l");
    case __S_IFREG:
        return my_printf("-");
    case __S_IFSOCK:
        return my_printf("s");
    default:
        return my_printf("?");
    }
}

void help_checkflag(int *file_count, char **file_names, int *flags)
{
    struct stat file_type;

    for (int i = 0; i < *file_count; i++) {
        if (file_names[i][0] != '.' || flags[7] == 1)
            my_printf("%s\n", file_names[i]);
    }
}

int calculate_blocks(char **file_names, int file_count, const char *dirname)
{
    int count = 0;
    int MAX_SIZE = 4096;
    struct stat file_type;
    char path[MAX_SIZE];

    for (int i = 0; i < file_count; i++) {
        my_strcpy(path, dirname);
        my_strcat(path, "/");
        my_strcat(path, file_names[i]);
        if (lstat(path, &file_type) == 0)
            count += file_type.st_blocks;
    }
    return count / 2;
}

void long_format(char **file_names, int *file_count, int *flags,
    const char *dirname)
{
    int MAX_SIZE = 4096;
    char path[MAX_SIZE];

    my_printf("total %d\n", calculate_blocks(file_names, *file_count,
    dirname));
    my_putchar('\n');
    for (int i = 0; i < *file_count; i++) {
        my_strcpy(path, dirname);
        my_strcat(path, "/");
        my_strcat(path, file_names[i]);
        long_loop(path, file_names, flags, i);
    }
}

void long_loop(char path[], char **file_names, int *flags, int i)
{
    if (flags[0] == 1 || file_names[i][0] != '.') {
        file_info(path);
        permissions_owner(path);
        permissions_group(path);
        permissions_others(path);
        my_putchar('.');
        hard_links(path);
        owner(path);
        group(path);
        if (my_strncmp(path, "/dev", 4) == 0)
            char_device(path);
        else
            file_size(path);
        timestamp(path);
        my_printf("%s", file_names[i]);
        my_putchar('\n');
    }
}
