#include "main.h"

/**
 * string_toupper - changes all lowercase lettersO[O to uppercase.
 * @s: it is a string
 * Return: character
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';

		i++;
	}

	return (s);
}
