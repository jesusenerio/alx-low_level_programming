#include "main.h"

/**
 * print_binary - this is the function that converts from interger to binary
 * @n: this is the interger to convert
 * Return: 1 success always
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n / 2);
	}
	
	_putchar("%lu", n % 2);
}
