/*
** EPITECH PROJECT, 2023
** $TEST_HASHTAG
** File description:
** United test for hashtag
*/

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>

Test(hashtag, flag_hashtag)
{
    const char *str = "%#o";
    int i = 1;

    char *e = hashtag(str, i);
    cr_assert_eq(e, 1);
}

Test(hashtag, flag_hashtag2)
{
    const char *str = "%#x";
    int i = 1;

    char *e = hashtag(str, i);
    cr_assert_eq(e, 1);
}

Test(hashtag, flag_hastga3)
{
    const char *str = "%#X";
    int i = 1;

    char *e = hashtag(str, i);
    cr_assert_eq(e, 1);
}
