/*
** EPITECH PROJECT, 2023
** $TEST_COUNT_FILES
** File description:
** Unit test
*/

Test(count_files, count_files_in_directory)
{
    const char *dirname = "/bonus";
    int result = count_files(dirname);

    cr_assert_eq(result, 2);
}

Test(count_files, count_files_in_dir)
{
    const char *dirname = "/empty";
    int result = count_files(dirname);

    cr_assert_eq(result, 0);
}
