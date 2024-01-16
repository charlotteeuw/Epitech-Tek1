/*
** EPITECH PROJECT, 2023
** $TEST_SCIENTIFIC1
** File description:
** Unit test for scientific_exp1
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(decimals, scientific2)
{
    double decimal_part = 12.2;

    int i = decimals(decimal_part);
    cr_assert_eq(i, 1);
}

Test(print_e, prints_e)
{
    int count = 2;
    int integer_part = 12;
    double decimal_part = 12.2;

    int i = print_e(count, integer_part, decimal_part);
    cr_assert_eq(i, 1);
}

Test(scientific_exp1, flag_e)
{
    double nb = 42.2;

    int i = scientific_exp1(nb);
    cr_assert_eq(i, 1);
}
