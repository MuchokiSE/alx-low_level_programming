#include <stdio.h>
/**
 * main - entry point of main code
 *
 * description - print alphabet in lowercase & reverse order, with new lines
 *
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	for ( ; c >= 'a'; c--)
	{
	putchar(c);
	}

	putchar('\n');

	return (0);
}
