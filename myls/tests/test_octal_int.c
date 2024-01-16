/*
** EPITECH PROJECT, 2023
** $TEST_OCTAL_INT
** File description:
** Unit test for octal_int
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(octal_int, int_to_octal)
{
    int nb = 42;

    int i = octal_int(nb);
    cr_assert_eq(i, 1);
}
    
