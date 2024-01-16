/*
** EPITECH PROJECT, 2023
** $TEST_PRINT_DEC
** File description:
** Unit test for print_dec
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(print_dec, prints_decimal)
{
    double nb = 42.2;

    double i = print_dec(nb);
    cr_assert_eq(i, 1);
}
