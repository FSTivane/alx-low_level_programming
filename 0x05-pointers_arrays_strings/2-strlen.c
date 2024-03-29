#include "main.h"

/**
 * _strlen - retuns the length of a string
 *
 * @s: string input
 *
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
