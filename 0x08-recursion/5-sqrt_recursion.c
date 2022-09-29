#include "main.h"

/**
 * _sqrt_recursion - square recursion
 * @n: the number to print
 * Return: print
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
	{
		return (n);
	}
	return (_sqrt(0, n));
}

/**
 * _sqrt - returns sqrt
 * @n: on test
 * @x: squared number
 * Return: square root of n
 */

int _sqrt(int n, int x)
{
	if (n > x / 2)
	{
		return (-1);
	} else if (n * n == x)
	{
		return (n);
	}
	return (_sqrt(n + 1, x));
}
