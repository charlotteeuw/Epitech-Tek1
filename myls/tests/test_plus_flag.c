/*
** EPITECH PROJECT, 2023
** $TEST_PLUS_FLAG
** File description:
** Unit test for plus_flag
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(plus_flag, flag_plus)
{
    int input = 42;

    int i = plus_flag(input);
    cr_assert_eq(i, 1);
}
