#include <stdio.h>
#include "main.h"
/**
 * _puts - length to 98;
 * @str: points to i
 * Return: length of a string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
