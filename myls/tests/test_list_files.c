/*
** EPITECH PROJECT, 2023
** $TEST_LIST_FILES
** File description:
** Unit test
*/

Test(list_files_tests, list_files_in_directory)
{
    // Given
    const char *dirname = "/some_directory_with_files";
    int flags[8] = {0};  // Adjust flags as needed

    // Redirect stdout to a buffer
    criterion_redirect_stdout();

    // When
    list_files(dirname, flags);

    // Then
    // Capture the printed output
    fflush(stdout);
    const char *captured_output = criterion_get_redirected_stdout();

    // Check if the output matches your expectations
    cr_assert_str_eq(captured_output, "expected_output");

    // Reset redirection
    criterion_reset_redirected_stdout();
}
