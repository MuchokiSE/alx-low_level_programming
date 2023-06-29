#include "main.h"
/**
 * _islower - checks for lowercase character.
 *
 * @c: character data type
 *
 * description - returns 1 if character is l_case. Otherwise 0.
 *
 * Return: 1 if lowercase; 0 if otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
