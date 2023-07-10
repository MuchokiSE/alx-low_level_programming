#include <stdio.h>
#include <math.h>
/**
 * main - finds & prints the largest prime factor of the number 612852475143
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int c;
	long number = 612852475143;

	for (c = (int) sqrt(number); c > 2; c++)
	{
		if (number % c == 0)
		{
			printf("%d\n", c);
			break;
		}
	}

	return (0);
}
