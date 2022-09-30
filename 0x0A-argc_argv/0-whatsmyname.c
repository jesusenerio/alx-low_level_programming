#include "main.h"
#include <stdio.h>

/**
 * main - prints the argv
 * @argc: this count the argument
 * @argv: this print name of the argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
