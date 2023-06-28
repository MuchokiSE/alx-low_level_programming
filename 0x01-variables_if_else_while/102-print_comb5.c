#include <stdio.h>
/**
 * main - entry point
 *
 * description - prints all possible combinations of two two-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	for ( ; i <= 98; i++)
	{
		int j = i;

		for ( ; j <= 99; j++)
		{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(' ');
		putchar((j / 10) + '0');
		putchar((j % 10) + '0');

		if (i != 98 || j != 99)
		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}


