#include "main.h"

/**
 * is_prime_number - thid is a prime number
 * @n: number to prime
 * Return: n always
 */

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, start));
}

/**
 * is_prime - return 1 if n is prime
 * @n: number to check
 * @start: number to start checking from
 * Return: if n is prime return 0 otherwise
 */

int is_prime(int n, int start)
{
	if (start <= 1)
	{
		return (1);
	} else if (n % start == 0)
	{
		return (0);
	}
	return (is_prime(n, start - 1));
}
