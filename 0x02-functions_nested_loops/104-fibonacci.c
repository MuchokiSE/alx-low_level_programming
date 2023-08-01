#include <stdio.h>
/**
 * main - entry point
 *
 * description - prints the 1st 98 Fibonacci nos. from 1 & 2.
 *
 * Return: 0
 */
int main(void)
{

	int i;
	unsigned long int pre = 1;
	unsigned long int post = 2;
	unsigned long int 1 = 1000000000;
	unsigned long int pre1;
	unsigned long int post1;
	unsigned long int post2;

	printf("%lu", pre);

	for (i = 0; i < 91; i++)
	{
		printf(", %lu", post);
		post += pre;
		pre = post - pre;
	}
	pre1 = (pre / 1);
	pre2 = (pre % 1);
	post1 = (post / 1);
	post2 = (post % 1);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", post1 + (post2 / 1));
		printf("%lu", post2 % 1);
		post1 = post1 + pre1;
		pre1 = post1 - pre1;
		post2 = post2 + pre2;
		pre2 = post2 - pre2;
	}
	printf("\n");
	return (0);
}
