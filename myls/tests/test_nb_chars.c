/*
** EPITECH PROJECT, 2023
** $TEST_NB_CHARS
** File description:
** Unit test for number_chars
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(number_chars, nb_chars)
{
    char *str = "hello";
    int nb = 2;

    char *i = number_chars(str, nb);
    cr_assert_eq(i, 1);
}
