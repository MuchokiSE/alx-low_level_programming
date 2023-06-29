#include "main.h"
/**
 * main - entry point
 *
 * description - prints the alphabet, in lcase. Excl std libraries.
 */
void print_alphabet(void)
{
	char c = 'a';

	for ( ; c <= 'z'; c++)
	{
	_putchar(c);
	}

	_putchar('\n');
}
