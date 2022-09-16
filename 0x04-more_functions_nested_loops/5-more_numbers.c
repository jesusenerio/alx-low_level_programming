#include "main.h"

/**
 * more_numbers - prints the function
 * i: int
 * _putchar: prints
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;

	j = 1;
	while (j <= 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar('1');
				_putchar(i % 10 + '0');
			}
		_putchar('\n');
		j++;
		}
	}
}
