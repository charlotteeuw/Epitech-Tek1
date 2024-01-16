/*
** EPITECH PROJECT, 2023
** $MAIN
** File description:
** bootstrap
*/

#include "../include/organized.h"
#include "../include/shell.h"

int main(void)
{
    counter_t *data = malloc(sizeof(counter_t));

    data->count = 0;
    data->list = NULL;
    workshop_shell(data);
    return 0;
}
