/*
** EPITECH PROJECT, 2023
** $TEST_LONG
** File description:
** Unit test for my_put_ull
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(my_put_ull, prints_long)
{
    unsigned long long nb = 42;

    unsigned long long i = my_put_ull(nb);
    cr_assert_eq(i, 0);
}

Test(my_put_ull, prints_long2)
{
    unsigned long long nb = -1;

    unsigned long long i = my_put_ull(nb);
    cr_assert_eq(i, 0);
}

Test(my_put_ull, prints_long3)
{
    unsigned long long nb = 2;

    unsigned long long i = my_put_ull(nb);
    cr_assert_eq(i, 0);
}
