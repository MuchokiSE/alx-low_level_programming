#include <stdio.h>
/**
 * main - main code entry point
 *
 * description - print alphabet in lowercase then uppercase,in new lines
 *
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	for ( ; c <= 'z'; c++)
	{
	putchar(c);
	}

	char C = 'A';

	for ( ; C <= 'Z'; C++)
	{
	putchar(C);
	}

	putchar('\n');

	return (0);
}
