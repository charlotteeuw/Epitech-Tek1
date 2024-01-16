/*
** EPITECH PROJECT, 2023
** $TEST_MY_LS
** File description:
** Unit test for my_ls
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(list_files, my_ls_test)
{
    const char *dirname = ".";
    int *flags = [1, 0, 0, 0, 0, 0];

    int a = list_files(dirname, flags);
    cr_assert_eq(a, 1);
}

