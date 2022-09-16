#include "main.h"

/**
 * print_numbers - prints the function
 * i: int
 * _putchar: prints
 * Return: void
 */

void print_numbers(void);
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n')
}
