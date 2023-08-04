#include "main.h"

/**
 * *_strncpy - Copies the source string to a destination string
 * to a limit of n bytes of the source string.
 *
 *@dest: destination string
 *@src: source string
 *@n: size of src string in bytes
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*src != '\0' && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}

	while (n > 0)
	{
	*dest_ptr = '\0';
	dest_ptr++;
	n--;
	}

	return (dest);
}
