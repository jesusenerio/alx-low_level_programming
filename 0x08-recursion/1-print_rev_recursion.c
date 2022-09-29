#include "main.h"

/**
 * _print_rev_recursion - this prints a string in rev
 * @s: string to rev
 * Return: void always
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
