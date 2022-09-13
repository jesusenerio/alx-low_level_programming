#include <stdio.h>
#include "main.h"
/**
 * main - this is main
 * putchar: prints
 * Return: 0
 */
int main(void)
{
	int print_alphabet(void)
	{
		int ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
			putchar('\n');
		}
	}
	print_alphabet();
	return (0);
}
