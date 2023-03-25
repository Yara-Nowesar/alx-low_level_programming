#include "main.h"

/**
 * more_numbers - print 0 - 14
 *      10 times
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int num, i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			num = count;
			if (count > 9)
			{
				_putchar(1 + 48);
				num = count % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
