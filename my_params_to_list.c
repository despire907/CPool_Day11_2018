/*
** EPITECH PROJECT, 2018
** task01
** File description:
** task01
*/

#include "include/my.h"
#include "include/mylist.h"
#include <stddef.h>
#include <stdlib.h>

int my_put_in_list(linked_list_t **list, char *data)
{
    linked_list_t *element;

    element = malloc(sizeof(*element));
    element->data = data;
    element->next = *list;
    *list = element;
    return(0);
}

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *list = NULL;
    int i = 0;
    while (i < ac) {
        my_put_in_list(&list, av[i]);
        i++;
    }
    return(list);
}
