/*
** EPITECH PROJECT, 2023
** $TEST_SPACE_FLAG
** File description:
** Unit test for space flag
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(space_flag, flag_space)
{
    int nb = 42;

    int i = space_flag(nb);
    cr_assert_eq(i, 1);
}
