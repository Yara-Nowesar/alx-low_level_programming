#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 *
 * Return: always 0 (success)
*/

void print_square(int size)
{
	int row, column;

	for (row = 1; row <= size; row++)
	{
		if (row <= 0)
		{
			_putchar('\n');
			break;
		}
		else
		{
			for (column = 0; column < size; column++)
				_putchar('#');
			_putchar('\n');
		}
	}

}
