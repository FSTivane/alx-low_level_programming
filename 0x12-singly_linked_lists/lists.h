#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - sngly linked list
 * @str: string
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for this project
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

	char _putchar(char c);
	size_t print_list(const list_t *h);

#endif
