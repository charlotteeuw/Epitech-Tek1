/*
** EPITECH PROJECT, 2023
** $TEST_FLAG
** File description:
** Unit test for flag
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(flag, flag_function)
{
    char flags = '+';
    int i = 1;
    const char *format = "%+5d";
    int *input = 42;

    int a = flag(flags, i, format, input);
    cr_assert_eq(a, 1);
}

Test(flag, flag_function2)
{
    char flags = '#';
    int i = 1;
    const char *format = "%#5d";
    int *input = 42;

    int b = flag(flags, i, format, input);
    cr_assert_eq(b, 1);
}

Test(flag, flag_function3)
{
    char flags = 'h';
    int i = 1;
    const char *format = "%hd";
    int *input = 42;

    int c = flag(flags, i, format, input);
    cr_assert_eq(c, 1);
}

Test(flag, flag_function4)
{
    char flags = 'l';
    int i = 1;
    const char *format = "%ld";
    int *input = 42;

    int d = flag(flags, i, format, input);
    cr_assert_eq(d, 0);
}

Test(flag2, flag_function5)
{
    char flags = ' ';
    int i = 1;
    const char *format = "% d";
    int input = 42;

    int e = flag2(flags, i, format, input);
    cr_assert_eq(e, 1);
}

Test(flag2, flag_function6)
{
    char flags = '0';
    int i = 1;
    const char *format = "%05d";
    int input = 42;

    int f = flag2(flags, i, format, input);
    cr_assert_eq(f, 1);
}

Test(flag2, flag_function7)
{
    char flags = 'e';
    int i = 1;
    const char *format = "%e";
    int input = 42;

    int g = flag2(flags, i, format, input);
    cr_assert_eq(g, 0);
}
