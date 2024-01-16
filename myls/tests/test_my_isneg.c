/*
** EPITECH PROJECT, 2023
** $TEST_MY_ISNEG
** File description:
** Unit test for my_isneg
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(my_isneg, is_negative)
{
    int nb = 42;

    int i = my_isneg(nb);
    cr_assert_eq(i, 0);
}
