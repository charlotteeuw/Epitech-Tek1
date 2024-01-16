/*
** EPITECH PROJECT, 2023
** $MAIN
** File description:
** bootstrap
*/

#include "../include/organized.h"
#include "../include/shell.h"

int push_to_list(linked_list_t **begin, char *type,
    char *name, int id)
{
    linked_list_t *element;

    if (my_strlen(type) == 0 || my_strlen(name) == 0 || id < 0)
        exit(84);
    element = malloc(sizeof(linked_list_t));
    element->type = my_strdup(type);
    element->name = my_strdup(name);
    element->id = id;
    element->next = *begin;
    *begin = element;
    return 0;
}

int add(void *data, char **args)
{
    counter_t *element = data;

    if (data == NULL || args == NULL || args[1] == NULL)
        exit(84);
    if (my_strcmp(args[0], "ACTUATOR") != 0 &&
        my_strcmp(args[0], "DEVICE") != 0 &&
        my_strcmp(args[0], "PROCESSOR") != 0 &&
        my_strcmp(args[0], "SENSOR") != 0 && my_strcmp(args[0], "WIRE") != 0)
        exit(84);
    for (int i = 0; args[i] != NULL && args[i + 1] != NULL; i += 2) {
        push_to_list(&element->list, args[i], args[i + 1], element->count);
        print_add(args, element, i);
        element->count++;
    }
    return 0;
}

int disp(void *data, char **args)
{
    counter_t *element = data;
    linked_list_t *list = element->list;

    if (data == NULL || args == NULL || args[0] != NULL)
        exit(84);
    while (list != NULL) {
        print_disp(list, element);
        list = list->next;
    }
    return 0;
}
