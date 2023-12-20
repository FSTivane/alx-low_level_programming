#include "main.h"

/**
 * _islower - check if letter is a lowercase
 *
 * @c: is the letter to be checked
 *
 * Return: 1 if c is true and 0 if else
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else

		return (0);
}

