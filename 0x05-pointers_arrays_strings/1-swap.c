#include "main.h"

/**
 * swap_int - function swaping the value of two integers
 * @a: integer to be swaped
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
