/*
** EPITECH PROJECT, 2023
** $TEST_CHECK_HEXA1
** File description:
** Unit test for hexa_int1
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(check_hexa1, hexa_flag)
{
    int nb = 11;

    char i = check_hexa1(nb);
    cr_assert_eq(i, 'B');
}

Test(check_hexa1, hexa_flag2)
{
    int nb = 9;

    char i = check_hexa1(nb);
    cr_assert_eq(i, '9');
}

Test(hexa_int1, hexa_flag3)
{
    int nb = 11;

    int i = hexa_int1(nb);
    cr_assert_eq(i, 1);
}

Test(hexa_int1, hexa_flag4)
{
    int nb = -11;

    int i = hexa_int1(nb);
    cr_assert_eq(i, 1);
}
