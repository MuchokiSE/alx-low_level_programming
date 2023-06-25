#include <stdio.h>
/**
 * main - entry point of code
 *
 * description - Prints single digits with base of 10 from 0, using putchar
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	for ( ; i < 10; i++)
	{
	putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
