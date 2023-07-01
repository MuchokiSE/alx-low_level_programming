#include "main.h"
/**
 * _abs - results in the absolute value of an integer
 *
 * @i: input value of integer
 *
 * Return: absolute value of integer; if >0, then i, otherwise i*-1.
 */
int _abs(int i)
{
	if (i >= 0)
	{
	return (i);
	}
	else
	{
	return (i * -1);
	}
	_putchar('\n');
}
