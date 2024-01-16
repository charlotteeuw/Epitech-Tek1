/*
** EPITECH PROJECT, 2023
** $TEST_MY_PRINTF
** File description:
** Unit test for printf
*/

#include <criterion/criterion.h>
#include <stdarg.h>

Test(flag_minus, test_flag_minus)
{
    const char *format = "Test format %d";
    int i = 0;
    int input = 42;
    va_list list;
    va_start(list, format);

    int result = flag_minus(i, format, list, input);
    cr_assert_eq(result, 1);
    va_end(list);
}

Test(where_specifier, test_where_specifier)
{
    const char *format = ("Test format 123");
    int i = 10;

    int result = where_specifier(format, i);
    cr_assert_eq(result, 12);
}

Test(in_printf, test_int_printf_zero_flag)
{
    const char *format = "Test format %04d";
    int i = 10;
    int input = 42;
    va_list list;
    va_start(list, format);
    int result = in_printf(i, format, list, input);
    cr_assert_eq(result, 14);
    va_end(list);
}

Test(double_value, test_double_value_float)
{
    const char *format = "Test format %f";
    int i = 10;
    int input = 0;
    va_list list;
    va_start(list, format);

    double result = double_value(format, i, input, list);
    cr_assert_float_eq(result, 0.0, 0.001);

    va_end(list);
}

Test(double_value, test_double_value_e)
{
    const char *format = "Test format %e";
    int i = 10;
    int input = 0;
    va_list list;
    va_start(list, format);

    double result = double_value(format, i, input, list);
    cr_assert_float_eq(result, 0.0, 0.001);

    va_end(list);
}

Test(double_value, test_double_value_default)
{
    const char *format = "Test format %d";
    int i = 10;
    int input = 42;
    va_list list;
    va_start(list, format);

    int result = double_value(format, i, input, list);
    cr_assert_eq(result, 42);

    va_end(list);
}
