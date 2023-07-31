#include "main.h"
/**
 * puts2 - prints every other character of a string starting
 * with the first one followed by new line.
 *
 *@str: input string
 */
void puts2(char *str)
{
	int a = 0;

	for ( ; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		_putchar(str[a]);
	}
	_putchar('\n');
}
