/*
** EPITECH PROJECT, 2023
** $TEST_POWER
** File description:
** Unit test for my_power_rec
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(my_compute_power_rec, power)
{
    int nb = 4;
    int p = 2;

    int i = my_compute_power_rec(nb, p);
    cr_assert_eq(i, 16);
}

Test(my_compute_power_rec, power1)
{
    int nb = 1;
    int p = 0;

    int i = my_compute_power_rec(nb, p);
    cr_assert_eq(i, 1);
}

Test(my_compute_power_rec, power2)
{
    int nb = 1;
    int p = -1;

    int i = my_compute_power_rec(nb, p);
    cr_assert_eq(i, 0);
}
