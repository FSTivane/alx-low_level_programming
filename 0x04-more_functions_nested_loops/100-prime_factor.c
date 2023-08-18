#include <stdio.h>
#include <math.h>

/**
 * is_prime - check if given number is prime
 * @num: number to be checked
 * Return: 0, 1
 */

int is_prime(long int num)
{
	long int i;

	if (num <= 1)
	{
		return (0);
	}
	if (num <= 3)
	{
		return (1);
	}
	if (num % 2 == 0 || num % 3 == 0)
	{
		return (0);
	}

	for (i = 5; i * i <= num; i += 6)
	{
		if (num % i == 0 || num % (i + 2) == 0)
		{
			return (0);
		}
	}

	return (1);
}

/**
 * largest_prime_factor - finds the largest prime factor of a given number
 * @num: parameter to be checked
 * Return: max_prime
 */

long int largest_prime_factor(long int num)
{
	long int i;
	long int max_prime = -1;

	while (num % 2 == 0)
	{
		max_prime = 2;
		num /= 2;
	}

	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			max_prime = i;
			num /= i;
		}
	}

	if (num > 2)
	{
		max_prime = num;
	}

	return (max_prime);
}

/**
 * main - prints the largest prime factor of the number
 *
 * Return: 0
 */

int main(void)
{
	long int number = 612852475143;
	long int largest_factor = largest_prime_factor(number);

	printf("%ld\n", largest_factor);

	return (0);
}
