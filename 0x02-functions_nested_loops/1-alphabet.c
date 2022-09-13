#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - this is a fuction that prints
 * putchar: prints
 * Return: 0
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
/**
 * main - this is main
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

