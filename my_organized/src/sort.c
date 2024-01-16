/*
** EPITECH PROJECT, 2023
** $SORT
** File description:
** sort functions
*/

#include "../include/organized.h"
#include "../include/shell.h"

int count_args(char **args)
{
    int i = 0;

    while (args[i] != NULL)
        i++;
    return i;
}

void r_option(char **args, int *i, void *data, counter_t *counter)
{
    if (counter->list == NULL)
        exit(84);
    if (my_strcmp(args[*i], "-r") == 0) {
        if (my_strcmp(args[*i - 1], "ID") == 0)
            sort_id_r(data, args, counter);
        if (my_strcmp(args[*i - 1], "NAME") == 0)
            sort_name_r(data, args, counter);
        if (my_strcmp(args[*i - 1], "TYPE") == 0)
            sort_type_r(data, args, counter);
        (*i)--;
    }
}

int sort(void *data, char **args)
{
    counter_t *counter = data;
    int len_tab = count_args(args);

    if (data == NULL || args == NULL || args[0] == NULL
    || counter->list == NULL)
        exit(84);
    for (int i = len_tab - 1; i >= 0; i--) {
        if (my_strcmp(args[i], "NAME") == 0)
            sort_name(data, args, counter);
        if (my_strcmp(args[i], "ID") == 0)
            sort_id(data, args, counter);
        if (my_strcmp(args[i], "TYPE") == 0)
            sort_type(data, args, counter);
        r_option(args, &i, data, counter);
        if (my_strcmp(args[i], "TYPE") != 0 && my_strcmp(args[i], "ID") != 0
        && my_strcmp(args[i], "NAME") != 0 && my_strcmp(args[i], "-r") != 0)
            exit(84);
    }
    return 0;
}

int reverse_sort(void *data, char **args)
{
    linked_list_t *prev = NULL;
    counter_t *counter = data;
    linked_list_t *next = NULL;
    linked_list_t *element = counter->list;

    if (data == NULL || args == NULL || counter->list == NULL)
        exit(84);
    while (element != NULL) {
        next = element->next;
        element->next = prev;
        prev = element;
        element = next;
    }
    counter->list = prev;
    return 0;
}
