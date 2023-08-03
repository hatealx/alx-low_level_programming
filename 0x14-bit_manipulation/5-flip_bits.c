#include "main.h"

/**
 * flip_bits - number of different bits between two numbers
 * @n: first
 * @m: second
 *
 * Return: number of bits you would need to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d, c;
	unsigned int co, i;

	co = 0;
	c = 1;
	d = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (c == (d & c))
			co++;
		c <<= 1;
	}
	return (co);
}
