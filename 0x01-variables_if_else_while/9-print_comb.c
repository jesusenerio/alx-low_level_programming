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
		if ((i != '9'))
		{
			putchar(',');
		}
		if ((i != '9'))
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
