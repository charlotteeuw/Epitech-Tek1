/*
** EPITECH PROJECT, 2023
** $MY_LS.H
** File description:
** My_ls.h
*/

#ifndef MY_LS_H_
    #define MY_LS_H_

    #include <dirent.h>
    #include <stddef.h>
    #include <stdio.h>
    #include "my.h"
    #include <sys/stat.h>
    #include <sys/types.h>
    #include <unistd.h>
    #include <sys/sysmacros.h>
    #include <grp.h>
    #include <time.h>
    #include <pwd.h>

int list_files(const char *dirname, int *flags);
void check_flag(int *flags, char **file_names, int *file_count,
    const char *dirname);
int show_dirs(const char *dirname);
void hidden_files(char *file_names[], int *file_count);
void reverse_files(char *file_names[], int file_count);
void call_flag(int argc, char *argv[], int flags[], int i);
void owner(char *file_name);
void group(char *file_name);
void file_size(char *file_name);
void timestamp(char *file_name);
void print_name(char *file_name);
void permissions_owner(char *file_name);
void permissions_group(char *file_name);
void permissions_others(char *file_name);
void hard_links(char *file_name);
int switch_long(struct stat *file_type);
int file_info(char *file_name);
void help_checkflag(int *file_count, char **file_names, int *flags);
void long_format(char **file_names, int *file_count, int *flags,
    const char *dirname);
int calculate_blocks(char **file_names, int file_count, const char *dirname);
void long_loop(char path[], char **file_names, int *flags, int i);
char **my_sort_time(char **file_names, int file_count,
    int *flags, const char *dirname);
char **if_time(int j, char **file_names, int i, const char *dirname);
void recursive_flag(const char *dirname);
void print_time_u(int file_count, char **file_names, int *flags);
void for_time_u(int i, int file_count, char **file_names, int *flags);
void my_sort_time_u(char **file_names, int file_count, int *flags);
int main(int argc, char **argv);
void bonus_bigf(char **file_names, int *file_count, int *flags);
char **my_sort_ls(char **file_names, int file_count, int *flags);
void in_checkflag(int *flags, char **file_names, int *file_count,
    const char *dirname);
void long_dirs(char *dirname);
void in_ls(int file_count, char **file_names, int i, char *temp);
void char_device(char *file_name);

#endif /* MY_LS_H_ */
