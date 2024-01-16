/*
** EPITECH PROJECT, 2023
** $TEST_MY_PUTCHAR
** File description:
** Unit test for my_putchar
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(my_putchar, puts_char)
{
    char c = 'h';

    char i = my_putchar(c);
    cr_assert_eq(i, 1);
}
