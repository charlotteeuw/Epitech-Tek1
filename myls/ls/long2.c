/*
** EPITECH PROJECT, 2023
** %LONG2
** File description:
** -l in my_ls
*/

#include "../include/my_ls.h"

void permissions_owner(char *file_name)
{
    struct stat file_type;
    int counter = 0;

    if (stat(file_name, &file_type) == -1) {
        perror("stat");
        exit(84);
    }
    stat(file_name, &file_type);
    if (file_type.st_mode & S_IRUSR)
        my_printf("r");
    else
        my_printf("-");
    if (file_type.st_mode & S_IWUSR)
        my_printf("w");
    else
        my_printf("-");
    if (file_type.st_mode & S_IXUSR)
        my_printf("x");
    else
        my_printf("-");
}

void permissions_group(char *file_name)
{
    struct stat file_type;

    if (stat(file_name, &file_type) == -1) {
        perror("stat");
        exit(84);
    }
    stat(file_name, &file_type);
    if (file_type.st_mode & S_IRGRP)
        my_printf("r");
    else
        my_printf("-");
    if (file_type.st_mode & S_IWGRP)
        my_printf("w");
    else
        my_printf("-");
    if (file_type.st_mode & S_IXGRP)
        my_printf("x");
    else
        my_printf("-");
}

void perms_others(struct stat *file_type)
{
    if (file_type->st_mode & __S_ISVTX)
        my_printf("T");
    else if (file_type->st_mode & S_IXOTH)
        my_printf("x");
    else
        my_printf("-");
}

void permissions_others(char *file_name)
{
    struct stat file_type;

    if (stat(file_name, &file_type) == -1) {
        perror("stat");
        exit(84);
    }
    stat(file_name, &file_type);
    if (file_type.st_mode & S_IROTH)
        my_printf("r");
    else
        my_printf("-");
    if (file_type.st_mode & S_IWOTH)
        my_printf("w");
    else
        my_printf("-");
    perms_others(&file_type);
}

void hard_links(char *file_name)
{
    struct stat file_type;

    if (stat(file_name, &file_type) == -1) {
        perror("stat");
        exit(84);
    }
    my_putchar(' ');
    stat(file_name, &file_type);
    my_printf("%d ", file_type.st_nlink);
}
