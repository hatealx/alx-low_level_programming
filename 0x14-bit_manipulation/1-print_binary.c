#include "main.h"

/**
 * powe - calculates
 * @b: base of the exponent
 * @p: power of the exponent
 *
 * Return: value of (base ^ power)
 */

unsigned long int powe(unsigned int b, unsigned int p)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= p; i++)
		num *= b;
	return (num);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int div, che;
	char fl;

	fl = 0;
	div = powe(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		che = n & div;
		if (che == div)
		{
			fl = 1;
			_putchar('1');
		}
		else if (fl == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}


