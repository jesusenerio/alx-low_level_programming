#include <stdio.h>
#include "main.h"
/**
 * swap_int - swap to 98;
 * @a: points to b
 * @b: point to a
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
