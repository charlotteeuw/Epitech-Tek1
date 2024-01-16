/*
** EPITECH PROJECT, 2023
** $MY_LS.H
** File description:
** My_ls.h
*/

#ifndef SETTING_H_
    #define SETTING_H_

    #include <stddef.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <sys/stat.h>
    #include <stdio.h>
    #include <stdlib.h>

struct Map
{
    int nb_ligne;
    int nb_column;
    char **tab;
    int max_i;
    int max_j;
};

typedef struct square_s {
    char **map;
    int row;
    int col;
} square_t;

void open_file(char *map_file);
void algorithm(char **tab, int nb_ligne, int nb_column);
int main(int argc, char **argv);
int nb_lines(char *buffer);
int check_char(char *buffer);
int in_checklen(char *buffer, int curr_len, int line_len, int j);
int check_length(char *buffer);
int check_length(char *buffer);
int is_square_of_size(square_t *square, int square_size);

#endif /* SETTING_H_ */
