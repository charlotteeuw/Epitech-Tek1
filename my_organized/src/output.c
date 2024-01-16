/*
** EPITECH PROJECT, 2023
** $OUTPUT
** File description:
** print output
*/

#include "../include/organized.h"
#include "../include/shell.h"

void print_add(char **args, counter_t *counter, int i)
{
    my_putstr(args[i]);
    my_putstr(" n°");
    my_put_nbr(counter->count);
    my_putstr(" - ");
    my_putchar('"');
    my_putstr(args[i + 1]);
    my_putchar('"');
    my_putstr(" added.");
    my_putchar('\n');
}

void print_disp(linked_list_t *list, counter_t *element)
{
    my_putstr(list->type);
    my_putstr(" n°");
    my_put_nbr(list->id);
    my_putstr(" - ");
    my_putchar('"');
    my_putstr(list->name);
    my_putchar('"');
    my_putchar('\n');
}

void print_del(linked_list_t *element)
{
    my_putstr(element->type);
    my_putstr(" n°");
    my_put_nbr(element->id);
    my_putstr(" - ");
    my_putchar('"');
    my_putstr(element->name);
    my_putchar('"');
    my_putstr(" deleted.");
    my_putchar('\n');
}
