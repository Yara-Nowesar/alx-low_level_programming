#include <stdio.h>

/**
 * main - print number of arguments
 * @argc: number of command line args
 * @argv: pointer to array of command line args
 * Return: 0-success, non-zero-fail
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
