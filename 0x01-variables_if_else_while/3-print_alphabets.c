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
	char C = 'A';

	for ( ; c <= 'z' && C <= 'Z'; c++, C++)
	{
	putchar(c);
	putchar(C);
	}
	putchar('\n');

	return (0);
}
