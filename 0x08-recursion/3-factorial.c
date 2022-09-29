#include "main.h"

/**
 * factorial - gets the factorial of a number
 * @n: number to check
 * Return: n
 */

int factorial(int n)
{
	int m;

	if (n == 0)
	{
		return (1);
	} else if (n < 0)
	{
		return (-1);
	}
	m = (n - 1);
	return (n * m);
}
