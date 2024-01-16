/*
** EPITECH PROJECT, 2023
** $SORT
** File description:
** sort functions
*/

#include "../include/organized.h"
#include "../include/shell.h"


int sort_id_r(void *data, char **args, counter_t *counter)
{
    linked_list_t *i = counter->list;
    linked_list_t *j;
    int len = count_list(i);
    int k = 0;

    for (k; k <= len; k++) {
        i = counter->list;
        while (i->next != NULL) {
            check_less_id(i, i->next);
            i = i->next;
        }
    }
    return 1;
}

int sort_name_r(void *data, char **args, counter_t *counter)
{
    linked_list_t *i = counter->list;
    linked_list_t *j;
    int len = count_list(i);
    int k = 0;

    for (k; k <= len; k++) {
        i = counter->list;
        while (i->next != NULL) {
            check_less_name(i, i->next);
            i = i->next;
        }
    }
    return 1;
}

int sort_type_r(void *data, char **args, counter_t *counter)
{
    linked_list_t *i = counter->list;
    linked_list_t *j;
    int len = count_list(i);
    int k = 0;

    for (k; k <= len; k++) {
        i = counter->list;
        while (i->next != NULL) {
            check_less_type(i, i->next);
            i = i->next;
        }
    }
    return 1;
}
