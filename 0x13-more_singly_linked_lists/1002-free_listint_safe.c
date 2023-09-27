#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely
 * @h: Pointer to the pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size;
	listint_t *current;
	listint_t *temp;
	int found;
	listint_t *check;

	size = 0;
	current = *h;
	found = 0;

	while (current != NULL)
	{
		size++;
		temp = current;
		current = current->next;

		check = *h;

		while (check != temp)
		{
			if (check == NULL)
				break;
			check = check->next;
		}

		if(check == temp && found)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			*h = NULL;
			break;
		}
		else
		{
			found = 1;
		}

		free(temp);
	}

	*h = NULL;
	return (size);
}

