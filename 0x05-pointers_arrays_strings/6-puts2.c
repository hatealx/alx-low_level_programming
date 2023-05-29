#include "main.h"
/**
 * puts2 - prints every other character of a string
 *
 * @str: char to check
 *
 * Return: 0 is success
 */

void puts2(char *str)
{
	int strin;

	for (strin = 0; str[strin] != '\0'; strin++)
	{
		if (strin % 2 == 0)
			_putchar(str[strin]);
	}
	_putchar('\n');
}

