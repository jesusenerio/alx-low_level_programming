#include "main.h"

/**
 * _pow_recursion - this is a power funtion
 * @x: number
 * @y: power
 * Return: x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	} else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
