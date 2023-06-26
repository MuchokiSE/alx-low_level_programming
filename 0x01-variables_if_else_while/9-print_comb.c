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
	int j = 0;

	for ( ; i < 10; i++)
	{
		for ( ; j < 10; j++)
		{
		putchar(i + '0');
		putchar(j + '0');
		putchar(',');
		}
	}

	putchar('\n');

	return (0);
}
