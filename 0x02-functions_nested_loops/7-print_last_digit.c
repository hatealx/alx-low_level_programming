#include "main.h"
/**
 * print_last_digit - function printing last digit
 *@i: function parameter
 * Return: Always k
 */
int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (k < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
