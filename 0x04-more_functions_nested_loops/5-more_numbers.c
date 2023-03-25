#include "main.h"

/**
 * more_numbers - print 0 - 14
 *      10 times
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + 48);
		}
		_putchar('\n');
	}
}
