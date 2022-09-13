#include "main.h"
/**
 * main - this is a fuction that prints
 * putchar: prints
 * Return: void
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - this ia a function
 * Return: void
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
