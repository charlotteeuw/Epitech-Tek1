/*
** EPITECH PROJECT, 2023
** $MY_STR_ISNUM
** File description:
** Checks if the str contains numbers
*/

int my_str_isnum(char const *str)
{
    if (str == " ")
        return 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            continue;
        } else {
            return 0;
        }
    }
    return 1;
}
