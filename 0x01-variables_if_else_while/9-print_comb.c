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
	putchar('0');
	int i = 1;

	for ( ; i < 10; i++)
	{
	putchar(',');
	putchar(' ');
	putchar(i + '0');
	}

	putchar('\n');

	return (0);
}