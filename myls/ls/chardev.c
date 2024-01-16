/*
** EPITECH PROJECT, 2023
** %CHARDEV
** File description:
** Char devices
*/

#include "../include/my_ls.h"
#include <sys/stat.h>

void char_device(char *file_name)
{
    struct stat file_type;
    int min = 0;
    int maj = 0;

    lstat(file_name, &file_type);
    if ((file_type.st_mode & __S_IFMT) == __S_IFCHR ||
    (file_type.st_mode & __S_IFMT) == S_ISBLK(file_type.st_mode)
    && (file_type.st_mode & __S_IFMT) != __S_IFLNK) {
        maj = major(file_type.st_rdev);
        min = minor(file_type.st_rdev);
        my_printf("%d", maj);
        my_putstr(", ");
        my_printf("%d", min);
        my_putchar(' ');
    } else
        file_size(file_name);
}
