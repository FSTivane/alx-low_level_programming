#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: double pointer
 * @str: element of the node
 *
 * Return: new element address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_elem;

	if (str == NULL)
		return (NULL);

	new_elem = malloc(sizeof(list_t));

	if (new_elem == NULL)
		return (NULL);

	new_elem->str = strdup(str);

	if (new_elem->str == NULL)
	{
		free(new_elem);
		return (NULL);
	}

	new_elem->len = strlen(str);
	new_elem->next = NULL;

	if (*head == NULL)
	{
		*head = new_elem;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new_elem;
	}

	return (new_elem);
}
