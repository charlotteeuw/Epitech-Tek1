/*
** EPITECH PROJECT, 2023
** $TEST_MY_PUTNBR
** File description:
** Unit test for my_putnbr
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(my_put_nbr, puts_nbr)
{
    int nb = 42;

    int i = my_put_nbr(nb);
    cr_assert_eq(i, 0);
}
