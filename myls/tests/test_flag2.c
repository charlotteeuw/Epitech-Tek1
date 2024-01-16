/*
** EPITECH PROJECT, 2023
** $TEST_FLAG2
** File description:
** Unit test for 2nd flag function
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(flag2, flag2_test)
{
    char flag = '0';
    int i = 2;
    const char *format = "%05d";
    int input = 42;

    int a = flag2(flag, i, format, input);
    cr_assert_eq(a, 1);
}
