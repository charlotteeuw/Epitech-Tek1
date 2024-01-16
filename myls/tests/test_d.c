/*
** EPITECH PROJECT, 2023
** $TEST_D
** File description:
** Unit test for my_put_nbr
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(my_put_nbr, prints_number)
{
    int nb = 42;

    int i = my_put_nbr(nb);
    cr_assert_eq(i, 0);
}

Test(my_put_nbr, prints_number2)
{
    int nb = -2147483648;

    int i = my_put_nbr(nb);
    cr_assert_eq(i, 0);
}

Test(my_put_nbr, prints_number3)
{
    int nb = 7;

    int i = my_put_nbr(nb);
    cr_assert_eq(i, 0);
}
