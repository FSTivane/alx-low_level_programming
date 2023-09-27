#include "main.h"
int _sqrt_helper(int n, int guess);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (0);
	}

		return (_sqrt_helper(n, n / 2));
}

/**
 * _sqrt_helper - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @guess: iterartion
 *
 * Return: the resulting square root
 */

int _sqrt_helper(int n, int guess)
{
	if (guess * guess <= n && (guess + 1) * (guess + 1) > n)
	{
		return (guess);
	}

	if (guess * guess < n)
	{
		return (_sqrt_helper(n, guess + 1));
	}
	else
	{
		return (_sqrt_helper(n, guess / 2));
	}
}
