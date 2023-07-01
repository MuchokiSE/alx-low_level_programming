#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i = 0;

	for ( ; i <= 9; i++)
	{
		int j = 0;

		for ( ; j <= 9; j++)
		{
			int k = i * j;

			if (i == 0 && j == 0)
			{
			_putchar(k + '0');
			}

			else if (k < 10 && j != 0)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(k + '0');
			}

			else
			{
			_putchar(',');
			_putchar(' ');
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
