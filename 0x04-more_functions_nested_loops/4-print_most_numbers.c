#include "main.h"

/**
 * print_most_numbers - A function that prints
 * the numbers, from 0 to 9, except 2 an 4
 * Return: nothing.
 */

void print_most_numbers(void)
{
	int n = 0;

	while (n < 10)
	{
		if (n != 2 && n != 4)
			_putchar(n + '0');
		n += 1;
	}
	_putchar('\n');
}
