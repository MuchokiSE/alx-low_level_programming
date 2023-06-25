#include <stdio.h>
/**
 * main - prints a-z in lower case in new lines.
 *
 * Return: 0
 */
int main(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	
	putchar('\n');

	return (0);
}
