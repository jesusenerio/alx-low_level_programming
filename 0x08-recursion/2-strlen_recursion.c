#include "main.h"

/**
 * _strlen_recursion - this gets the length of a string
 * @s: this gets the length of the string
 * Return: s
 */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
