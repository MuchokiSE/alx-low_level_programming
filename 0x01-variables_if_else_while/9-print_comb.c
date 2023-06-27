#include <stdio.h>
/**
 * main - entry point
 *
 * description - print all combis of single digit nos. with new lines
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	for ( ; i < 10; i++)
	{
	putchar(i + '0');

		if (i < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
