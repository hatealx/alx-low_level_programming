#include "main.h"
/**
 * _abs - check the a
 *
 * @a: integer to be checked
 * Return: always a
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
