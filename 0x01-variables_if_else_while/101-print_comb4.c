#include <stdio.h>
/**
 * main - main
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0 ; i < 0 ; i++)
	{
		for (j = 0 ; j < 0 ; j++)
		{
			for (k = 0 ; k < 0 ; k++)
			{
				if (i < j && j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i + j + k != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}


	}
	putchar('\n');
	return (0);

}
