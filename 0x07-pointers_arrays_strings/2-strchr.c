#include "main.h"

/**
 * _strchr - delete strig before the word c then print
 * @c: char to delete
 * @s: string to delete from
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	return (0);
}
