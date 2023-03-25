#include "main.h"

/**
 * main - print numbers 1 - 100 followed by a new line
 *	numbers that are multiples of 3 print Fizz
 *	numbers that are multiples by 5 print Buzz
 *	numpers that are multiples of 3 and 5 print FizzBuzz
 * each number and word to be seperated by space
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			print("%d", num);
		if (num != 100)
			print(" ");
		else
			print("\n");
	}

	return (0);
}
