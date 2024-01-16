/*
** EPITECH PROJECT, 2023
** $MY_LS.H
** File description:
** My_ls.h
*/

#ifndef ORGANIZED_H_
    #define ORGANIZED_H_

    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>

typedef struct linked_list_s {
    void *data;
    struct linked_list_s *link;
    struct linked_list_s *next;
    char *type;
    char *name;
    int id;
} linked_list_t;

typedef struct counter_s {
    int count;
    linked_list_t *list;
} counter_t;

/*typedef struct node_s {
    void *data;
    node_t *left;
    node_t *right;
    char *type;
    char *name;
    int id;
} node_t;*/

int reverse_sort(void *data, char **args);
int bubble_sort_id(void *data, char **args, counter_t *counter);
void print_add(char **args, counter_t *counter, int i);
int main(void);
int my_strlen(char const *str);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
char *my_strdup(char const *src);
int my_getnbr(char const *str);
void print_disp(linked_list_t *list, counter_t *element);
int sort_id(void *data, char **args, counter_t *counter);
void swap_name(linked_list_t **i, linked_list_t **j);
void swap_id(linked_list_t **i, linked_list_t **j);
void swap_type(linked_list_t **i, linked_list_t **j);
int sort_name(void *data, char **args, counter_t *counter);
int sort_type(void *data, char **args, counter_t *counter);
int my_strcmp(char const *s1, char const *s2);
void check_greater_id(linked_list_t *i, linked_list_t *j);
void check_greater_name(linked_list_t *i, linked_list_t *j);
void check_greater_type(linked_list_t *i, linked_list_t *j);
void print_del(linked_list_t *element);
void r_option(char **args, int *i, void *data, counter_t *counter);
int sort_name_r(void *data, char **args, counter_t *counter);
int sort_type_r(void *data, char **args, counter_t *counter);
int sort_id_r(void *data, char **args, counter_t *counter);
void check_less_id(linked_list_t *i, linked_list_t *j);
void check_less_name(linked_list_t *i, linked_list_t *j);
void check_less_type(linked_list_t *i, linked_list_t *j);
int count_list(linked_list_t *i);
int my_str_isnum(char const *str);

#endif
