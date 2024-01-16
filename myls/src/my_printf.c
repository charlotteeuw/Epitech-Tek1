/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** mini printf
*/

#include "../include/my.h"
#include <stdarg.h>

int flag_minus(int i, const char *format, va_list list, int input)
{
    i = where_specifier(format, i + 1);
    specifier1(format[i + 1], input);
    minus_flag(format, i, input);
    return (i + 1);
}

int where_specifier(const char *format, int i)
{
    while (is_num(format[i + 1]) == 1) {
        i++;
    }
    return (i);
}

int in_printf(int i, const char *format, va_list list, int input)
{
    if (format[i + 1] == '0') {
        i += flag(format[i + 1], i, format, &input);
        i += flag2(format[i + 1], i, format, input);
        specifier1(format[i + 2], input);
        i += 3;
        return i;
    } else if (format[i + 1] == '-') {
        flag_minus(i, format, list, input);
        i += where_specifier(format, i);
        return i;
    } else {
        i += flag(format[i + 1], i, format, &input);
        specifier1(format[i + 1], input);
        i += 2;
        return i;
    }
}

void double_value(const char *format, int i, va_list list)
{
    if (format[i + 1] == 'f')
        float_flag(va_arg(list, double));
    if (format[i + 1] == 'e')
        scientific_exp2(va_arg(list, double));
    if (format[i + 1] == 'E')
        scientific_exp1(va_arg(list, double));
}

static int test(const char *format, int i, va_list list, int input)
{
    if (format[i + 1] == 'f' || format[i + 1] == 'e' || format[i + 1] == 'E') {
        double_value(format, i, list);
        i += 2;
    } else if (format[i + 1] == 's') {
        my_putstr(va_arg(list, char *));
        i += 2;
    } else {
        input = va_arg(list, void *);
        i = in_printf(i, format, list, input);
    }
    return (i);
}

int my_printf(const char *format, ...)
{
    va_list list;
    int i = 0;
    int input = 0;

    va_start(list, format);
    while (i < my_strlen(format)) {
        if (format[i] == '%')
            i += test(format, i, list, input);
        else {
            my_putchar(format[i]);
            i++;
        }
    }
    va_end(list);
    return 0;
}
