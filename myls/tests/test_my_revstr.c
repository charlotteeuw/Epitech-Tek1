/*
** EPITECH PROJECT, 2023
** $TEST_MY_REVSTR
** File description:
** Unit test for my_revstr
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(my_revstr, rev_string)
{
    char str[5] = "hello";

    char *i = my_revstr(str);
    cr_assert_eq(i, "olleh");
}
