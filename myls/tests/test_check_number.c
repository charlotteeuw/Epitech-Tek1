/*
** EPITECH PROJECT, 2023
** $TEST_CHECK_NUMBER
** File description:
** Unit test for check_number
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(check_number, checks_num)
{
    const char *format = "Test format %123d";
    int i = 10;
    va_list list;
    va_start(list, format);

    int result = check_number(format, i, list);
    int expected = 123;

    cr_assert_eq(result, expected, "Expected: %d, Got: %d", expected, result);
    va_end(list);
}

