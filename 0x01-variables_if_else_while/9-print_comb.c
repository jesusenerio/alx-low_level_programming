#include <stdio.h>
/**
 * main - this is main
 * putchar: prints
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		while (i < 9)
		{
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
