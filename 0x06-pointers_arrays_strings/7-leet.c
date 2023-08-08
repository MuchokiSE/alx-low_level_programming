#include "main.h"

/**
 * *leet - encodes a string into 1337.
 *
 * letters 'a' and 'A' should be replaced by 4
 * letters 'e' and 'E' should be replaced by 3
 * letters 'o' and 'O' should be replaced by 0
 * letters 't' and 'T' should be replaced by 7
 * letters 'l' and 'L' should be replaced by 1
 *
 * use one 'if' in the code
 * use only 2 loops in the code
 * not to use 'switch'
 *
 *@str: string input value
 *
 * Return: 0.
 */

char *leet(char *str)
{
	int i;
	int j;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
			}
		}
	}

	return (str);
}
