#include <stdio.h>
/**
 * main - this is main function
 * Return: always 0
 */
int main(void)
{
	int ch;

	for(ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar('\n');
	}
	return (0);
}
