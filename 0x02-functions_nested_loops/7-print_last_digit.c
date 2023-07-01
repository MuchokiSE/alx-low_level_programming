#include "main.h"
/**
 * print_last_digit - prints last digit
 *
 * @i: input value of integer
 *
 * Return: Value of last digit.
 */
int print_last_digit(int i)
{
	int j = i % 10;

	if (j >= 0)
	{
	_putchar('0' + j);
	return (j);
	}

	else
	{
	_putchar('0' - j);
	return (0);
	}
	_putchar('\n');
}
