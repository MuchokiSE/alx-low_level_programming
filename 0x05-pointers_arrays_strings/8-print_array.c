#include "main.h"
/**
 * print_array - prints n elements of array of integers
 * followed by new line using printf.
 *
 *@a: integer parameter
 *@n: integer parameter
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
