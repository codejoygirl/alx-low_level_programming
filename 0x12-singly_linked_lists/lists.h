#ifndef _LISTS_H
#define _LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - A singly linked list
 * @str: A malloced string
 * @len: The lenght of the string
 * @next: Pointing to the next node
 */

typedef struct list_s
{
        char *str;
        size_t len;
        struct list_s *next;
}list_t;

size_t print_list(const list_t *h);
#endif
