#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - this is the puts
 * @s: point to memory address
 * Return: s
 */

void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}
