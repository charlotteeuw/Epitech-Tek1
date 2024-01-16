/*
** EPITECH PROJECT, 2023
** $SORT
** File description:
** sort functions
*/

#include "../include/organized.h"
#include "../include/shell.h"

int sort_id(void *data, char **args, counter_t *counter)
{
    linked_list_t *i = counter->list;
    linked_list_t *j;
    int len = count_list(i);
    int k = 0;

    for (k; k <= len; k++) {
        i = counter->list;
        while (i->next != NULL) {
            check_greater_id(i, i->next);
            i = i->next;
        }
    }
    return 1;
}

int sort_name(void *data, char **args, counter_t *counter)
{
    linked_list_t *i = counter->list;
    linked_list_t *j;
    int len = count_list(i);
    int k = 0;

    for (k; k <= len; k++) {
        i = counter->list;
        while (i->next != NULL) {
            check_greater_name(i, i->next);
            i = i->next;
        }
    }
    return 1;
}

int count_list(linked_list_t *i)
{
    int counter = 0;

    while (i->next != NULL) {
        i = i->next;
        counter++;
    }
    return counter;
}

int sort_type(void *data, char **args, counter_t *counter)
{
    linked_list_t *i = counter->list;
    linked_list_t *j;
    int len = count_list(i);
    int k = 0;

    for (k; k <= len; k++) {
        i = counter->list;
        while (i->next != NULL) {
            check_greater_type(i, i->next);
            i = i->next;
        }
    }
    return 1;
}
