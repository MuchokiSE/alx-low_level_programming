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

	int j = i + 1;

		for ( ; j <= 9; j++)
		{
		putchar(i + '0');
		putchar(j + '0');

			if (i != 8 || j != 9)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
