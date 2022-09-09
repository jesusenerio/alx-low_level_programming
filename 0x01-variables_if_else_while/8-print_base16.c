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

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (dm = 'a'; dm <= 'f'; dm++)
	{
		putchar(dm);
	}
	putchar('\n');
	return (0);
}
