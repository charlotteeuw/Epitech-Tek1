/*
** EPITECH PROJECT, 2023
** $TEST_CHECK_HEXA2
** File description:
** 
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(check_hexa2, hexa2_flag)
{
    int nb = 11;

    char i = check_hexa2(nb);
    cr_assert_eq(i, 'b');
}

Test(check_hexa2, hexa2_flag2)
{
    int nb = 9;

    char i = check_hexa2(nb);
    cr_assert_eq(i, '9');
}

Test(hexa_int2, hexa2flag)
{
    int nb = 11;

    char i = hexa_int2(nb);
    cr_assert_eq(i, 1);
}

Test(hexa_int2, hexa3flag)
{
    int nb = -11;

    char i = hexa_int2(nb);
    cr_assert_eq(i, 1);
}
