#include <stdio.h>

/**
 * main - prints size of computer data types
 *
 * Return: 0
 */

int main(void)
{
	printf("Size of char: %lu byte\n", sizeof(char));
	printf("Size of int: %lu bytes\n", sizeof(int));
	printf("Size of long int: %lu bytes\n", sizeof(long int));
	printf("Size of long long int: %lu bytes\n", sizeof(long long int));
	printf("Size of float: %lu bytes\n", sizeof(float));

	return (0);
}