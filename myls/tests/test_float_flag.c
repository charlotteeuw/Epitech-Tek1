/*
** EPITECH PROJECT, 2023
** $TEST_FLOAT_FLAG
** File description:
** Unit test for float_flag
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(float_flag, float_number)
{
    double nb = 42.2;

    double n= float_flag(nb);
    cr_assert_eq(n, 1);
}

Test(float_flag, float_number2)
{
    double nb = -42.2;

    double n1 = float_flag(nb);
    cr_assert_eq(n1, 1);
}
