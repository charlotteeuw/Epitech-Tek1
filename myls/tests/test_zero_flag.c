/*
** EPITECH PROJECT, 2023
** $TEST_ZERO_FLAG
** File description:
** Unit test for zero_flag
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(zero_flag, flag_zero)
{
    int input = 42;
    int number = 5;

    int i = zero_flag(input, number);
    cr_assert_eq(i, 1);
}
