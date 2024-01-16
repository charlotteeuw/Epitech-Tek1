/*
** EPITECH PROJECT, 2023
** $TEST_MY_STRLEN
** File description:
** Unit test for my_strlen
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(my_strlen, length_ofstr)
{
    char const *str = "hello";

    char *i = my_strlen(str);
    cr_assert_eq(i, 5);
}
