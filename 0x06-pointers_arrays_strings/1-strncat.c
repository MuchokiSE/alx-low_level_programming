#include "main.h"

/**
 * *_strncat - appends src string to dest string but limited to n
 * bytes from src.
 *
 *@src: source string
 *@dest: destination string
 *@n: size of the string src
 *
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	while (n > 0 && *src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}

	*dest_ptr = '\0';

	return (dest);
}
