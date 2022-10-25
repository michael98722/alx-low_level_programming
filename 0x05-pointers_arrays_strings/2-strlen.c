#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: the character
 * Return: length of the string
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)

		a++;

	return (a);
}
