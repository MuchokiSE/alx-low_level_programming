#include "main.h"
/**
 * print_line - draw a straight line
 *@n: no of times character _ is printed
 */
void print_line(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (c = 0; c < n; c++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
