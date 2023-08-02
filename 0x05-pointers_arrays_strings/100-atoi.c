#include "main.h"
/**
 * _atoi - converts a string to an integer
 *
 *@s: string to be converted
 *
 * Return: end product after conversion
 */
int _atoi(char *s)
{
	int end_product = 0;
	int sign = 1;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
			s++;
		}
		else if (*s == '+')
		{
			s++;
		}
		else if (*s >= '0' && *s <= '9')
		{
			int digit  = *s - '0';

			end_product = end_product * 10 + digit;
			s++;
		}
		else
		{
			if (end_product != 0 || (*s != ' ' && *s != '\t'))
			{
				return (end_product * sign);
			}
			s++;
		}
	}
	return (end_product * sign);
}
