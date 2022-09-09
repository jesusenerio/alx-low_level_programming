#include <stdio.h>
/**
 * main - this is main
 * putchar: prints
 * Return: 0
 */
int main(void)
{
	int ch;
	int dm;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (dm = 'A'; dm <= 'Z'; dm++)
	{
		putchar(dm);
	}
	putchar('\n');
	return (0);
}
