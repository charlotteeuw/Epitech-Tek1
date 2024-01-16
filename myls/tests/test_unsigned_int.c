/*
** EPITECH PROJECT, 2023
** $TEST_UNSIGNED_INT
** File description:
** Unit test for unsigned int
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(unsigned_int, int_tounsigned)
{
    int nb = 42;

    int i = unsigned_int(nb);
    cr_assert_eq(i, 1);
}
