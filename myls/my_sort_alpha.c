/*
** EPITECH PROJECT, 2023
** $MY_SORT_ALPHA
** File description:
** Sorts an array alphabetically
*/

char **my_sort_alpha(char *str[])
{
    char mini = 'a';
    char **temp;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < mini) {
            mini = str[i];
            temp[i] = str[i];
        }
    }
    return temp;
}
