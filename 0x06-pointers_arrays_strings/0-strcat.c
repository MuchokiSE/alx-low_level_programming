#include "main.h"
/**
 * *_strcat - appends the src string to dest string
 * overwriting the terminating null byte at the end of
 * dest and adds a terminating null byte.
 *
 *@dest: character data type to which *desk points.
 *@src: character data type to which *src points.
 *
 * Return: value of dest
 */
char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}

	*dest_ptr = '\0';

	return (dest);
}
