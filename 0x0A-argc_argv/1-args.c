#include "main.h"
#include <stdio.h>

/**
 * main - this prints number of argument
 * @argc: this count
 * @argv: this print what number
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", (argc - 1));
	return (0);
}
