#include "main.h"
/**
 * print_triangle - prints a triangle using the character '#'
 *
 *@size: size is the size of the triangle.
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
