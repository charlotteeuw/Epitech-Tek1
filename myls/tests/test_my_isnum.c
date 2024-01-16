/*
** EPITECH PROJECT, 2023
** $TEST_MY_ISNUM
** File description:
** Unit test for my_isnum
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(my_isnum, is_number)
{
    char number = '4';

    char i = my_isnum(number);
    cr_assert_eq(i, 1);
}
