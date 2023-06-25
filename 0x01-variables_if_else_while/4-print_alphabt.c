#include <stdio.h>
/**
 * main - main entry point of code
 *
 * description - prints alphabet in l_case excl 'q'&'e', in new lines
 *
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	for ( ; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
		putchar(c);
		}
	}
	putchar('\n');

	return (0);
}
