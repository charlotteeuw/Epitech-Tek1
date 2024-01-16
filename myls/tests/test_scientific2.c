/*
** EPITECH PROJECT, 2023
** $TEST_SCIENTIFIC1
** File description:
** Unit test for scientific_exp1
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(scientific_exp2, flag_E)
{
    double nb = 42.2;

    int i = scientific_exp2(nb);
    cr_assert_eq(i, 1);
}
