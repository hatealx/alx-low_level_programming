#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: char to check
 * Description: this will return the length of a string
 * Return: 0 is success
 */
int _strlen(char *s)
{
	int lens = 0;

	while (*s != '\0')
	{
		lens++;
		s++;
	}
	return (lens);
}
