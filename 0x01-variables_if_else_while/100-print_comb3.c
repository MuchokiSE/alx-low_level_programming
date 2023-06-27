#include <stdio.h>
/**
 * main - entry point for code
 *
 * description - print combis of 2 digits
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	for ( ; i < 100; i++)
	{

	int j = (i / 10);
	int k = (i % 10);

	putchar(j + '0');
	putchar(k + '0');

		if (i < 99)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
