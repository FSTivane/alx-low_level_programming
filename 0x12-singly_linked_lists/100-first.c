#include <stdio.h>

void print_before_main(void) __atribute__((constructor));

/**
 * print_before_main - prints a string before the main function is executed
 */
void print_before_nain(void);
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
