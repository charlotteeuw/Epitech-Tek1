/*
** EPITECH PROJECT, 2023
** $SETTING_UP
** File description:
** Setting up projects
*/

#include "../include/setting.h"

int length_number(int number)
{
    int length = 0;

    if (number == 0) {
        length = 1;
    } else {
        while (number != 0) {
            length++;
            number = number / 10;
        }
    }
    return length;
}

int check_char(char *buffer)
{
    int i = nb_lines(buffer);

    for (int j = length_number(i) + 1; buffer[j] != '\0'; j++) {
        if (buffer[j] != '.' && buffer[j] != 'o' && buffer[j] != '\n')
            return 84;
    }
    return 1;
}

int in_checklen(char *buffer, int curr_len, int line_len, int j)
{
    if (buffer[j] == '\n') {
        if (curr_len == line_len) {
            curr_len = 0;
            j++;
        } else
            return 84;
    }
}

int check_length(char *buffer)
{
    int i = nb_lines(buffer);
    int line_len = 0;
    int j = length_number(i) + 1;
    int curr_len = 0;

    while (buffer[j] != '\0' && buffer[j] != '\n') {
        line_len++;
        j++;
    }
    j++;
    while (buffer[j] != '\0') {
        curr_len++;
        j++;
        in_checklen(buffer, curr_len, line_len, j);
    }
    return 1;
}

int is_valid(char const *filepath, int fd)
{
    struct stat file_type;
    char *buffer;
    int size = 0;
    int size_read = 0;

    stat(filepath, &file_type);
    size = file_type.st_size;
    buffer = malloc(sizeof(char) * (size + 1));
    size_read = read(fd, buffer, size);
    if (filepath == NULL || fd < 0 || size_read <= 0)
        return 84;
    buffer[size] = '\0';
    if (nb_lines(buffer) > 0 && check_char(buffer) == 1
    && check_length(buffer) == 1)
        return fd;
    else {
        close(fd);
        return 84;
    }
    close(fd);
}
