/*
** EPITECH PROJECT, 2023
** check_number
** File description:
** ...
*/

#include "../include/my.h"

int check_number(char *format, int i, va_list list)
{
    int counter = 0;
    int checker = 1;

    if (is_num(format[i + 1]) == 1) {
        if (format[i + 1] == 0)
            checker += 1;
        else {
            counter = format[i + 1];
            i++;
        }
    }
    if (is_num(format[i + 1]) == 1) {
        while (is_num(format[i + 1]) == 1) {
            counter = (counter * 10) + format[i + 1];
            i++;
        }
    }
    return (counter);
}
