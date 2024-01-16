/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** ...
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdio.h>
    #include <stdarg.h>
    #include <stdlib.h>
    #include <unistd.h>

int my_printf(const char *format, ...);
int flag(char flag, int i, const char *format, int *input);
int flag2(char flag, int i, const char *format, int input);
int where_specifier(const char *format, int i);
unsigned long long my_put_ull(unsigned long long nb);
int print_e(int count, int integer_part, double decimal_part);
int check_number(char *format, int i, va_list list);
int float_flag(double nb);
int print_dec(double decimal_part);
int hashtag(char const *str, int i);
char check_hexa1(int nb);
char check_hexa2(int nb);
int hexa_int1(int nb);
int hexa_int2(int nb);
int length_number(int number);
int minus_flag(const char *format, int i, int input);
int my_compute_power_rec(int nb, int p);
int my_isneg(int n);
int is_num(char c);
int my_putchar(char c);
int my_put_nbr(int nb);
int horror_moovie(void);
int my_putstr(char const *str);
unsigned int my_put_unsigned(unsigned int nb);
char *my_revstr(char *str);
int my_strlen(char const *str);
void number_chars(char *str, int nb);
int integer(int number);
int octal_int(int nb);
int pointer_flag(void *nb);
int decimals(double decimal_part);
double changer(double decimal_part, int count);
int scientific_exp1(double nb);
int scientific_exp2(double nb);
void specifier1(const char flag, int input);
void specifier2(const char flag, int input);
int unsigned_int(int nb);
int plus_flag(int input);
int zero_flag(int input, int number);
int length(int number);
int space_flag(int number);
int my_ls(const char *dirname, int hidden, int reverse);
void my_sort_word_array(char **tab);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
char *my_strcat(char *dest, char const *src);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strlowcase(char *str);

#endif /* MY_H_ */
