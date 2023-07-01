#include "main.h"
/**
 * add - adds two integers
 *
 * @i: integer value
 *
 * @j: integer value
 *
 * Return: 0
*/
int add(int i, int j)
{
	int k = add(i, j);

	if (k >= -9 || k < 9)
	{
	_putchar(k + '0');
	_putchar('\n');
	}


	else
	{
	_putchar((k / 10) + '0');
	_putchar((k % 10) + '0');
	_putchar('\n');
	}

	return (0);
}
