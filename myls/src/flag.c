/*
** EPITECH PROJECT, 2023
** $FLAG
** File description:
** Function for flags
*/

#include "../include/my.h"

int flag(char flag, int i, const char *format, int *input)
{
    if (flag == '#') {
        hashtag(format, i + 1);
        return (1);
    }
    if (flag == '+') {
        plus_flag(*input);
        return (1);
    }
    if (flag == 'h') {
        *input = (short int)*input;
        return (1);
    }
    if (flag == ' ') {
        space_flag(input);
        return (1);
    }
    return (0);
}

int flag2(char flag, int i, const char *format, int input)
{
    int number = format[i + 2] - '0';

    if (flag == '0') {
        zero_flag(input, number);
        return (1);
    }
    return (0);
}
