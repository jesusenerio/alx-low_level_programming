#include "main.h"
/**
* _strncpy - c function that copy the code
* @dest: destination
* @src: source
* @n: max number of bytes copied
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
