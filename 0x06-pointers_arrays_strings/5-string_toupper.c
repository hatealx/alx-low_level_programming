#include "main.h"
/**
 * string_toupper - change lowercase to uppercase
 * @s:string
 * Return:char
 */
char *string_toupper(char *s)
{
	iint i;

	i =  0;
	while (*(s + 1))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) >= 'a' - 'A';
		i++;
	}
	return (s);
}
