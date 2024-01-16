/*
** EPITECH PROJECT, 2023
** $TEST_MINUS_FLAG
** File description:
** Unit test for minus flag
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(length_number, len_ofnum)
{
    int number = 0;

    int i = length_number(number);
    cr_assert_eq(i, 1);
}

Test(length_number, len_ofnum1)
{
    int number = 11;

    int i = length_number(number);
    cr_assert_eq(i, 2);
}

Test(minus_flag, flagminus)
{
    const char *format = "%-5d";
    int i = 1;
    int input = 42;

    int a = minus_flag(format, i, input);
    cr_assert_eq(a, 1);
}
