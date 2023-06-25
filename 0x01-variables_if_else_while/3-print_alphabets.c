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

	char k = 'A';

	for ( ; k <= 'Z'; k++)
	{
	putchar(k);
	}

	putchar('\n');

	return (0);
}
