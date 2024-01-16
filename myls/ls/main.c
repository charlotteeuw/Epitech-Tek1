/*
** EPITECH PROJECT, 2023
** %MAIN
** File description:
** Ls main
*/

#include "../include/my_ls.h"

int main(int argc, char **argv)
{
    char *dirname = ".";
    int flags[9] = {0};

    for (int i = 1; i < argc; i++) {
        if (argv[i][0] == '-')
            call_flag(argc, argv, flags, i);
        else
            dirname = argv[i];
    }
    if (flags[3] == 1) {
        if (flags[2] == 1)
            long_dirs(dirname);
        else
            show_dirs(dirname);
    } else
        list_files(dirname, flags);
    return 0;
}
