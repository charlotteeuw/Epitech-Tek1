/*
** EPITECH PROJECT, 2023
** $SORT
** File description:
** sort functions
*/

#include "../include/organized.h"
#include "../include/shell.h"

linked_list_t *find_middle(linked_list_t *element, counter_t *list)
{
    int counter = 0;

    if (element == NULL)
        exit(84);
    while (element != NULL) {
        element = element->next;
        counter++;
    }
    element = list->list;
    for (int i = 0; i < (counter / 2); i++) {
        element = element->next;
    }
    return element;
}

void merge_leftright(linked_list_t *left, linked_list_t *right, linked_list_t **temp)
{
    if (left == NULL) {
        (*temp) = right;
        return;
    }
    if (right == NULL) {
        (*temp) = left;
        return;
    }
    while (left != NULL && right != NULL) {
        if (left->data < right->data) {
            (*temp)->next = left;
            (*temp) = left;
            left = left->next; 
        } else {
            (*temp)->next = right;
            (*temp) = right;
            right = right->next;
        }
    }
    while (left != NULL) {
        (*temp)->next = left;
        (*temp) = left;
        left = left->next;
    }
    while (right != NULL) {
        (*temp)->next = right;
        (*temp) = right;
        right = right->next;
    }
    return;
}

linked_list_t *merge_sort(void *data, char **args, counter_t *counter)
{
    counter_t *counter = data;
    linked_list_t *left = counter->list;
    linked_list_t *mid = find_middle(left, counter);
    linked_list_t *right = mid->next;
    linked_list_t *temp;
    linked_list_t *result;

    mid->next = NULL;
    left = merge_sort(data, args, counter);
    right = merge_sort(data, args, counter);
    temp = NULL;
    result = temp;
    merge_leftright(left, right, &temp);
    return result;
}