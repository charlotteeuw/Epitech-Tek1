/*
** EPITECH PROJECT, 2023
** $MAIN
** File description:
** Main for setting up
*/

#include "../include/setting.h"

void in_main(int nb)
{
    if (nb == 5000 || nb == 10000)
        exit(0);
}

int main(int argc, char **argv)
{
    int nb = 0;
    char **tab;
    int number = 0;
    int fd = 0;

    if (argc == 3 && my_strlen(argv[2]) == 0)
        return 84;
    if (argc == 2)
        fd = open(argv[1], O_RDONLY);
    if (fd == -1 || argc == 1)
        return 84;
    if (argc == 2 && is_valid(argv[1], fd))
        open_file(argv[1]);
    else if (argc == 3) {
        number = convert_number(argv[1]);
        tab = generation(number, argv[2]);
        algorithm(tab, number, number);
    }
    return 0;
}
