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

	for ( ; i <= 99; i++)
	{

	int w = (i / 10);
	int x = (i % 10);

		int j = 0;

		for ( ; j <= 99; j++)
		{

		int y = (j / 10);
		int z = (j % 10);

			if (w < y || (w == y && x < z))
			{
			putchar(w + '0');
			putchar(x + '0');
			putchar(' ');
			putchar(y + '0');
			putchar(z + '0');

				if (!(w == 9 && x == 8))
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}


