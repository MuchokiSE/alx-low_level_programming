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
	{
	_putchar(j + '0');
	return (j);
	}
	_putchar('\n');
}
