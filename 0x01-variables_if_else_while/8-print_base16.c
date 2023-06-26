#include <stdio.h>
/**
 * main - entry point of main code block
 *
 * description - prints nos of base 16 in lowercase, with new lines
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	for ( ; i < 16; i++)
	{
		if (i < 10)
		{
		putchar(i + '0');
		}
		else
		{
		putchar(i - 10 + 'a');
		}
	}

	putchar('\n');

	return (0);
}
