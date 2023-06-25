#include <stdio.h>
/**
 * main - prints a-z in lower case in new lines.
 *
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	
	for (; c <= 'z'; c++)
	{
	putchar(c);
	}
	
	putchar('\n');

	return (0);
}
