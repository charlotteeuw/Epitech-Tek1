/*
** EPITECH PROJECT, 2023
** my_putstr
** File description:
** function that write 1 by 1 the char of a string
*/

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != 0) {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}
