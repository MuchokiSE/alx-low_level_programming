#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string
 *
 *@s: string pointer to a character type
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end;
	
	while (s[length] != '\0')
		length++;
	
	end = length - 1;
	
	while (start < end)
	{
		char swap = s[start];
		s[start] = s[end];
		s[end] = swap;
		start++;
		end--;
	}
}
