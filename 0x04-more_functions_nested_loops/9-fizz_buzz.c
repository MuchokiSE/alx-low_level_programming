#include <stdio.h>
/**
 * main - entry point
 *
 * description - prints nos. 1 - 100, followed be new line.
 * if no. multiple of three, print 'Fizz', if multiple of five, print 'Buzz'
 * if both mutiple of 3 and 5, print 'FizzBuzz'
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}

		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}

		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}

		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
