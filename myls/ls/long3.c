/*
** EPITECH PROJECT, 2023
** %LONG3
** File description:
** -l in my_ls
*/

#include "../include/my_ls.h"

void owner(char *file_name)
{
    struct stat file_type;
    struct passwd *pwd;

    lstat(file_name, &file_type);
    if (my_strcmp(file_name, ".") == 0 || my_strcmp(file_name, "..") == 0) {
        my_printf("%s ", file_name);
        return;
    }
    pwd = getpwuid(file_type.st_uid);
    if (pwd != NULL)
        my_printf("%s ", pwd->pw_name);
    else
        perror("getpwuid");
}

void group(char *file_name)
{
    struct stat file_type;
    struct group *grp;

    lstat(file_name, &file_type);
    if (my_strcmp(file_name, ".") == 0 || my_strcmp(file_name, "..") == 0) {
        my_printf("%s ", file_name);
        return;
    }
    grp = getgrgid(file_type.st_gid);
    if (grp != NULL)
        my_printf("%s ", grp->gr_name);
    else
        perror("getgrgid");
}

void file_size(char *file_name)
{
    struct stat file_type;

    if (stat(file_name, &file_type) == -1) {
        perror("stat");
        exit(84);
    }
    lstat(file_name, &file_type);
    my_printf("%d ", file_type.st_size);
}

void timestamp(char *file_name)
{
    char *time_str;
    struct stat file_type;

    if (stat(file_name, &file_type) == -1) {
        perror("stat");
        exit(84);
    }
    stat(file_name, &file_type);
    time_str = ctime(&file_type.st_mtime);
    for (int i = 4; i < 16; i++)
        my_printf("%c", time_str[i]);
    my_putchar(' ');
}

void long_dirs(char *dirname)
{
    file_info(dirname);
    permissions_owner(dirname);
    permissions_group(dirname);
    permissions_others(dirname);
    hard_links(dirname);
    owner(dirname);
    group(dirname);
    file_size(dirname);
    timestamp(dirname);
    my_printf("\033[1;34m%s", dirname);
    my_putstr("\033[0m");
    my_putchar('\n');
}
