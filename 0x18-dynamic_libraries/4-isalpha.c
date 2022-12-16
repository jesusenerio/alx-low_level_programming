#include "main.h"
/**
 * _isalpha - checkes lowe
 * Return: 0
 * @c: character
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
