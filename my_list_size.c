/*
** EPITECH PROJECT, 2018
** task01
** File description:
** task01
*/

#include "include/my.h"
#include "include/mylist.h"
#include <stdio.h>
#include <stdlib.h>

int my_list_size(linked_list_t const *begin)
{
  linked_list_t *list = begin;
  int i = 0;
  
  while (list != NULL) {
    list = list->next;
    i++;
  }
  return (i);
}
