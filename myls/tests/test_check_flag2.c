/*
** EPITECH PROJECT, 2023
** $TEST_CHECK_FLAG2
** File description:
** Unit test
*/

Test(check_flag_tests, check_flag_with_flags_set)
{
    // Given
    int flags[8] = {0};  // Adjust flags as needed
    flags[4] = 1;  // Set the flag that should trigger my_sort_time
    const char *dirname = "/some_directory_with_files";

    // Redirect stdout to a buffer
    criterion_redirect_stdout();

    // When
    char *file_names[] = {"file1", "file2", "file3"};  // Example file_names array
    int file_count = sizeof(file_names) / sizeof(file_names[0]);
    check_flag(flags, file_names, &file_count, dirname);

    // Then
    // Capture the printed output
    fflush(stdout);
    const char *captured_output = criterion_get_redirected_stdout();

    // Add assertions based on the expected behavior
    cr_assert_str_eq(captured_output, "expected_output");
}

Test(check_flag_tests, check_flag_with_different_flags_set)
{
    // Given
    int flags[8] = {0};  // Adjust flags as needed
    flags[2] = 1;  // Set the flag that should trigger long_format
    const char *dirname = "/some_directory_with_files";

    // Redirect stdout to a buffer
    criterion_redirect_stdout();

    // When
    char *file_names[] = {"file1", "file2", "file3"};  // Example file_names array
    int file_count = sizeof(file_names) / sizeof(file_names[0]);
    check_flag(flags, file_names, &file_count, dirname);

    // Then
    // Capture the printed output
    fflush(stdout);
    const char *captured_output = criterion_get_redirected_stdout();

    // Add assertions based on the expected behavior
    cr_assert_str_eq(captured_output, "expected_output");
}
