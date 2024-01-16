/*
** EPITECH PROJECT, 2023
** $TEST_MY_PUTSTR
** File description:
** Unit test for my_putstr
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(my_putstr, prints_str)
{
    char const *str = "hello";

    char *i = my_putstr(str);
    cr_assert_eq(i, 0);
}
