/*
** EPITECH PROJECT, 2023
** %MY_LS2
** File description:
** Second function for ls
*/

#include "../include/my_ls.h"

void call_flag(int argc, char *argv[], int flags[], int i)
{
    for (int j = 1; argv[i][j] != '\0'; j++) {
        if (argv[i][j] == 'a')
            flags[0] = 1;
        if (argv[i][j] == 'r')
            flags[1] = 1;
        if (argv[i][j] == 'l')
            flags[2] = 1;
        if (argv[i][j] == 'd')
            flags[3] = 1;
        if (argv[i][j] == 't')
            flags[4] = 1;
        if (argv[i][j] == 'R')
            flags[5] = 1;
        if (argv[i][j] == 'u')
            flags[6] = 1;
        if (argv[i][j] == 'f')
            flags[7] = 1;
        if (argv[i][j] == 'F')
            flags[8] = 1;
    }
}

int file_info(char *file_name)
{
    struct stat file_type;

    if (stat(file_name, &file_type) == -1) {
        perror("stat");
        exit(84);
    }
    stat(file_name, &file_type);
    switch_long(&file_type);
}

void hidden_files(char *file_names[], int *file_count)
{
    struct stat file_type;

    for (int i = 0; i < *file_count; i++) {
        stat(file_names[i], &file_type);
        if (S_ISDIR(file_type.st_mode)) {
            my_printf("\033[1;34m%s", file_names[i]);
            my_putstr("\033[1;0m");
            my_putchar('\n');
        } else
            my_printf("%s\n", file_names[i]);
    }
}

void reverse_files(char *file_names[], int file_count)
{
    int j = 0;
    char *temp;

    for (int i = file_count - 1; i > (file_count / 2); i--) {
        temp = file_names[j];
        file_names[j] = file_names[i];
        file_names[i] = temp;
        j++;
    }
}

int show_dirs(const char *dirname)
{
    DIR *dirp = opendir(dirname);
    struct dirent *entity;
    struct stat file_type;

    if (dirp == NULL) {
        perror("opendir");
        exit(84);
    }
    if (stat(dirname, &file_type) == -1) {
        perror("stat");
        exit(84);
    }
    my_printf("\033[1;34m%s", dirname);
    my_putstr("\033[1;0m");
    closedir(dirp);
}
