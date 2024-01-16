/*
** EPITECH PROJECT, 2023
** $ALGORITHM2
** File description:
** Algorithm for setting up
*/

#include "../include/setting.h"

void open_file(char *map)
{
    int fd = open(map, O_RDONLY);
    struct stat file_type;
    char *buffer;
    int size = 0;
    int size_read = 0;

    stat(map, &file_type);
    size = file_type.st_size;
    buffer = malloc(sizeof(char) * (size + 1));
    size_read = read(fd, buffer, size);
    if (map == NULL || fd < 0 || size_read < 0)
        return 84;
    buffer[size] = '\0';
    buffer_into_tab(buffer, fd);
}

int count_nb_columns(char *buffer)
{
    int number_lines = extract_number(buffer);
    int nb_columns = 0;
    int i = length_number(number_lines) + 1;

    for (i; buffer[i] != '\n'; i++) {
        nb_columns++;
    }
    return nb_columns;
}

int extract_number(char *buffer)
{
    int result = 0;
    int i = 0;

    while (buffer[i] < '0' || buffer[i] > '9')
        i++;
    while (buffer[i] >= '0' && buffer[i] <= '9') {
        result = result * 10 + (buffer[i] - '0');
        i++;
    }
    return result;
}

void buffer_into_tab(char *buffer, int fd)
{
    int j = 0;
    int number_lines = extract_number(buffer);
    int nb_columns = count_nb_columns(buffer);
    char **tab = malloc(sizeof(char *) * (number_lines + 1));
    int k = length_number(number_lines) + 1;
    int i = 0;

    for (i; i < number_lines; i++) {
        j = 0;
        tab[i] = malloc(sizeof(char) * (nb_columns + 1));
        for (j; j < nb_columns; j++) {
            tab[i][j] = buffer[k];
            k++;
        }
        tab[i][j] = '\0';
        k++;
    }
    tab[i] = NULL;
    close(fd);
    algorithm(tab, number_lines, nb_columns);
}
