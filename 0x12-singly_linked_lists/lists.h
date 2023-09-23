#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/* Define the structure for a node in the linked list */
typedef struct list_s {
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* Function prototype for printing the list and returning the number of nodes */
size_t print_list(const list_t *h);

#endif
