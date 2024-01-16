/*
** EPITECH PROJECT, 2023
** $SORT
** File description:
** sort functions
*/

#include "../include/organized.h"
#include "../include/shell.h"

void check_less_id(linked_list_t *i, linked_list_t *j)
{
    if (i->id < j->id) {
        swap_name(&i, &j);
        swap_id(&i, &j);
        swap_type(&i, &j);
    }
}

void check_less_name(linked_list_t *i, linked_list_t *j)
{
    if (my_strcmp(i->name, j->name) < 0) {
        swap_name(&i, &j);
        swap_id(&i, &j);
        swap_type(&i, &j);
    }
}

void check_less_type(linked_list_t *i, linked_list_t *j)
{
    if (my_strcmp(i->type, j->type) < 0) {
        swap_name(&i, &j);
        swap_id(&i, &j);
        swap_type(&i, &j);
    }
}
