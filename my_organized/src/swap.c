/*
** EPITECH PROJECT, 2023
** $SWAP
** File description:
** swap linked list elems
*/

#include "../include/organized.h"
#include "../include/shell.h"

void swap_name(linked_list_t **i, linked_list_t **j)
{
    char *temp;

    temp = (*i)->name;
    (*i)->name = (*j)->name;
    (*j)->name = temp;
}

void swap_id(linked_list_t **i, linked_list_t **j)
{
    int temp;

    temp = (*i)->id;
    (*i)->id = (*j)->id;
    (*j)->id = temp;
}

void swap_type(linked_list_t **i, linked_list_t **j)
{
    char *temp;

    temp = (*i)->type;
    (*i)->type = (*j)->type;
    (*j)->type = temp;
}
