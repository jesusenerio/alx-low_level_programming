#include "main.h"

/**
 * print_numbers - prints the function
 * i: int
 * _putchar: prints
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n')
}
