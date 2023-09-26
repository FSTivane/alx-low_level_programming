#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the beginning of the list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *temp = NULL;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
			count++;

		temp = current;
		current = current->next;

		if (temp <= current)
		{
			printf(stderr, "Error: loop detected in the list\n");
				exit(98);
		}
	}

	return (count);
}

