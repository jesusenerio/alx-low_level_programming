#include "main.h"

/**
* reverse_array - reverse the array
* @a: integer array to be reverse
* @n: intehger length of array
* Return: void
*/
void reverse_array(int *a, int n)
{
	int i = 0, t;

	n = n - 1;
	while (i < n)
	{
		t = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = t;
		i++;
		n--;
	}
}
