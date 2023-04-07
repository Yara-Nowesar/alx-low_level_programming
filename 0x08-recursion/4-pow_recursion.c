 #include "main.h"

/**
 * _pow_recursion - search for a string
 * @x: base
 * @y: exponant
 * Return: pointer to the byte in s
 * that matches one of the bytes in accept
 * or NULL if this byte not found
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));

}
