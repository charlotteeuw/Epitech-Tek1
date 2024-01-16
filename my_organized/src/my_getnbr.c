/*
** EPITECH PROJECT, 2023
** $MY_GETNBR
** File description:
** Returns a number sent to the function
*/

#include "../include/organized.h"
#include "../include/shell.h"

int minus_counter(char const *str, int count, int i)
{
    if (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            count++;
    }
    return count;
}

int my_getnbr(char const *str)
{
    int i = 0;
    int count = 0;
    long result = 0;

    while (str[i] != '\0') {
        count = minus_counter(str, count, i);
        if (str[i] >= '0' && str[i] <= '9') {
            result *= 10;
            result += str[i] - 48;
        }
        if ((str[i] != '+' && str[i] != '-') &&
            !(str[i] >= '0' && str[i] <= '9'))
            return result;
        i++;
    }
    if ((count % 2) == 1)
        result = -result;
    return result;
}
