#include "main.h"

/**
 * _isupper - check if charater is upper
 * @c: charater
 * Return: 1 succes 0 fail
 */

int _isupper(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
