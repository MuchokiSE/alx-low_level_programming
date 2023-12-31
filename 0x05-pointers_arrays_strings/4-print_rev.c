#include "main.h"
/**
 * print_rev - prints string in reverse followed by new line.
 *
 *@s: string pointing to 1st element.
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
