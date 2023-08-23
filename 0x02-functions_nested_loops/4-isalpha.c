#include "main.h"

/**
 * _isalpha - check wether is a letter, lower or uppercase
 *
 *@c:is the argument to be used in the function
 *
 * Return: 1 if success and zero if else
*/

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A' && c <= 'Z')))
	{
		return (1);
	}
	else

	return (0);
}

