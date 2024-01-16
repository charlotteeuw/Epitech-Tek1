/*
** EPITECH PROJECT, 2023
** $TEST_UNSIGNED
** File description:
** Unit test for my_put_unsigned
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(my_put_unsigned, prints_unsigned)
{
    unsigned int nb = 42;

    unsigned int i = my_put_unsigned(nb);
    cr_assert_eq(i, 42);
}

Test(my_put_unsigned, prints_unsigned2)
{
    unsigned int nb = 2;
    unsigned int i = my_put_unsigned(nb);
    cr_assert_eq(i, 2);
}
