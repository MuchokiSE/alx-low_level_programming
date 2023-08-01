#include "main.h"
/**
 * _strcpy - Copies the string pointed to by src including terminating
 * null byte to the buffer pointed to by dest
 *
 *@dest: pointer variable
 *@src: pointer variable
 *
 * Return: Value of *dest
 */
char *_strcpy(char *dest, char *src)
{
	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}

	else
	{
		char *dest_ptr = dest;

		while (*src != '\0')
		{
			*dest_ptr = *src;
			dest_ptr++;
			src++;
		}
		*dest_ptr = '\0';

		return (dest);
	}
}
