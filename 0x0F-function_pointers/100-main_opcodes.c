#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main -  prints the opcodes of its own main function
 *
 * @argc: number of arguments
 * @argv: array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, num_bytes;
	void (*main_ptr)(void) = (void (*)(void))main;
	unsigned char *main_opcode;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	main_opcode = (unsigned char *)main_ptr;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", main_opcode[i]);
		if (i < num_bytes - 1)
		printf(" ");
	}
	printf("\n");

	return (0);
}
