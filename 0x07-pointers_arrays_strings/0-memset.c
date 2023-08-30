#include "main.h"

/**
 * _memset -  fills memory with a constant byte
 * @n: first byes
 * @b: the constant byte
 * @s: pointer
 *
 * Return: new array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (;n >0; i++)
	{
		s[b] = b;
		n--;
	}

	return (s);
