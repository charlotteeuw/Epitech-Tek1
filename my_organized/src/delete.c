/*
** EPITECH PROJECT, 2023
** $DELETE
** File description:
** delete
*/

#include "../include/organized.h"
#include "../include/shell.h"

void delete_element(linked_list_t **prev,
    linked_list_t **element, counter_t *counter)
{
    if ((*prev) != NULL)
        (*prev)->next = (*element)->next;
    else
        counter->list = (*element)->next;
    *element = (*element)->next;
}

int in_del(linked_list_t **element, int nb,
    linked_list_t **prev, counter_t *counter)
{
    if ((*element)->id == nb) {
        print_del(*element);
        delete_element(prev, element, counter);
        return 1;
    } else {
        (*prev) = (*element);
        (*element) = (*element)->next;
        return 0;
    }
}

void error_checking(void *data, char **args)
{
    if (data == NULL || args == NULL || args[0] == NULL
    || my_str_isnum(args[0]) == 0)
        exit(84);
}

int del(void *data, char **args)
{
    counter_t *counter = data;
    linked_list_t *element;
    linked_list_t *prev;
    int nb = 0;
    int count = 0;

    error_checking(data, args);
    for (int j = 0; args[j] != NULL; j++) {
        if (my_str_isnum(args[j]) == 0)
            exit(84);
        prev = NULL;
        element = counter->list;
        while (element != NULL) {
            nb = my_getnbr(args[j]);
            count += in_del(&element, nb, &prev, counter);
        }
    }
    if (count == count_args(args))
        return 0;
    exit(84);
}
