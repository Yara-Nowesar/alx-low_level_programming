#include "main.h"

/**
 * print_most_numbers - print 0 - 9
 *	do not print 2 and 4
 *      only using _putchar twice
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + 48);
		}
	}
	_putchar('\n');
}
