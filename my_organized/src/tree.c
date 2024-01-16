/*
** EPITECH PROJECT, 2023
** $SORT
** File description:
** sort functions
*/

#include "../include/organized.h"
#include "../include/shell.h"

node_t *tree_node(linked_list_t *list)
{
    node_t *temp = malloc(sizeof(node_t));

    temp->id = list->id;
    temp->type = list->type;
    temp->name = list->name;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

node_t *add_tree_name(node_t *root, linked_list_t *element)
{
    if (root == NULL) {
        root = tree_node(element);
    } else {
        if (my_strcmp(root->name, element->name) > 0) {
            root->right = add_tree_name(root->right, element);
        } else {
            root->left = add_tree_name(root->left, element);
        }
    }
    return root;
}

node_t *add_tree_type(node_t *root, linked_list_t *element)
{
    if (root == NULL) {
        root = tree_node(element);
    } else {
        if (my_strcmp(root->type, element->type) > 0) {
            root->right = add_tree_type(root->right, element);
        } else {
            root->left = add_tree_type(root->left, element);
        }
    }
    return root;
}

node_t *add_tree_id(node_t *root, linked_list_t *element)
{
    if (root == NULL) {
        root = tree_node(element);
    } else {
        if (root->id > element->id) {
            root->right = add_tree_id(root->right, element);
        } else {
            root->left = add_tree_id(root->left, element);
        }
    }
    return root;
}

node_t *convert_list_to_tree(linked_list_t *element, char *arg)
{
    node_t *root = NULL;

    if (element != NULL) {
        root = tree_node(element);
        element = element->next;
        while (element != NULL) {
            if (my_strcmp(arg, "TYPE") == 0)
                root = add_tree_type(root, element);
            if (my_strcmp(arg, "NAME") == 0)
                root = add_tree_name(root, element);
            if (my_strcmp(arg, "ID") == 0)
                root = add_tree_id(root, element);
            element = element->next;
        }
    }
    return root;
}

linked_list_t *convert_tree_to_list(node_t *root)
{
    linked_list_t *list = NULL;

    list = infix_tree(root, list);
    return list;
}

int push_tree(linked_list_t **begin, node_t *root)
{
    linked_list_t *element;

    element = malloc(sizeof(linked_list_t));
    element->type = root->type;
    element->name = root->name;
    element->id = root->id;
    element->next = *begin;
    *begin = element;
    return 0;
}

linked_list_t *infix_tree(node_t *root, linked_list_t *list)
{
    if (root == NULL)
        return list;
    list = infix_tree(root->right, list);
    push_tree(&list, root);
    list = infix_tree(root->left, list);
    return list;
}

int sort(void *data, char **args)
{
    counter_t *counter = data;
    int len_tab = count_args(args);

    if (data == NULL || args == NULL || args[0] == NULL)
        exit(84);
    for (int i = len_tab - 1; i >= 0; i--) {
        convert_list_to_tree(counter->list, args[i]);
        r_option(args, &i, data, counter);
        if (my_strcmp(args[i], "TYPE") == 1 && my_strcmp(args[i], "ID") == 1
        && my_strcmp(args[i], "NAME") == 1 || my_strcmp(args[i], "-r") == 1)
            exit(84);
    }
    return 0;
}
