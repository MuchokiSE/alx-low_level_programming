#include "main.h"
/**
 * _isalpha - checks for alphabetic characters.
 *
 * @c: char data type.
 *
 * Return: 1 if char is a letter; otherwise 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
		return (1);
	else
		return (0);
}
