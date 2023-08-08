#include "main.h"

/**
 * *cap_string - Capitalizes all words of a string
 *
 *@str: string to be converted
 *
 * Return: str in capitalized form
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (str[index - 1] == ' ' ||
			str[index - 1] == '\t' ||
			str[index - 1] == '\n' ||
			str[index - 1] == ',' ||
			str[index - 1] == '.' ||
			str[index - 1] == ';' ||
			str[index - 1] == '!' ||
			str[index - 1] == '?' ||
			str[index - 1] == '"' ||
			str[index - 1] == '(' ||
			str[index - 1] == ')' ||
			str[index - 1] == '{' ||
			str[index - 1] == '}' ||
			index == 0)

		{
			if (str[index] >= 'a' && str[index] <= 'z')
			{
				str[index] = str[index] - 'a' + 'A';
			}
		}

		index++;
	}

	return (str);
}
