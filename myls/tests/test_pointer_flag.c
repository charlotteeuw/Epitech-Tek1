/*
** EPITECH PROJECT, 2023
** $TEST_POINTER_FLAG
** File description:
** Unit test for pointer_flag
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(pointer_flag, flag_pointer)
{
    void *nb = 42;

    void *i = pointer_flag(nb);
    cr_assert_eq(i, 1);
}
